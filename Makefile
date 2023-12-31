# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 14:18:45 by nleoni            #+#    #+#              #
#    Updated: 2024/01/06 20:15:14 by nleoni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS += ft_isalpha.c
SRCS += ft_isdigit.c
SRCS +=	ft_isalnum.c
SRCS +=	ft_isascii.c
SRCS +=	ft_isprint.c
SRCS +=	ft_strlen.c
SRCS +=	ft_memset.c
SRCS +=	ft_bzero.c
SRCS +=	ft_memcpy.c
SRCS +=	ft_memmove.c
SRCS +=	ft_strlcpy.c
SRCS +=	ft_strlcat.c
SRCS +=	ft_toupper.c
SRCS +=	ft_tolower.c
SRCS +=	ft_strchr.c
SRCS += ft_strrchr.c
SRCS +=	ft_strncmp.c
SRCS +=	ft_memchr.c
SRCS +=	ft_memcmp.c
SRCS +=	ft_strnstr.c
SRCS +=	ft_atoi.c
SRCS +=	ft_calloc.c
SRCS += ft_strdup.c

SRCS +=	ft_substr.c
SRCS +=	ft_strjoin.c
SRCS +=	ft_strtrim.c
SRCS +=	ft_split.c
SRCS +=	ft_itoa.c
SRCS +=	ft_strmapi.c
SRCS +=	ft_striteri.c
SRCS +=	ft_putchar_fd.c
SRCS +=	ft_putstr_fd.c
SRCS +=	ft_putendl_fd.c
SRCS +=	ft_putnbr_fd.c

# SRCS_BONUS +=	ft_lstnew.c
# SRCS_BONUS +=	ft_lstadd_front.c
# SRCS_BONUS +=	ft_lstsize.c
# SRCS_BONUS +=	ft_lstlast.c
# SRCS_BONUS +=	ft_lstadd_back.c
# SRCS_BONUS +=	ft_lstdelone.c
# SRCS_BONUS +=	ft_lstclear.c
# SRCS_BONUS +=	ft_lstiter.c
# SRCS_BONUS +=	ft_lstmap.c

OBJS		= $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

# OBJS_BONUS	= $(addprefix $(OBJDIR)/, $(SRCS_BONUS:.c=.o))


OBJDIR		= objects

NAME		= libft.a

INCLUDES	= ./

HEADER		= $(INCLUDES)libft.h

CC			= clang

CFLAGS		+= -Wall
CFLAGS		+= -Wextra
CFLAGS		+= -Werror

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $@ $^

bonus:			$(NAME) $(OBJS_BONUS)
				ar rcs $(NAME) $(OBJS_BONUS)

$(OBJDIR):
				mkdir $@

$(OBJDIR)/%.o:	%.c
				$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

$(OBJS):		$(HEADER) | $(OBJDIR)

# $(OBJS_BONUS):	$(HEADER)

clean:
				$(RM) -r $(OBJDIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY:			all clean fclean re bonus custom
