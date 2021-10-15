# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenito- <hbenito-@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 17:36:32 by hbenito-          #+#    #+#              #
#    Updated: 2021/09/28 11:31:50 by hbenito-         ###   ########.getxo     #
#                                                                              #
# **************************************************************************** #

SOURCE	= ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_memset.c \
		  ft_bzero.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_strncmp.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strnstr.c \
		  ft_atoi.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_split.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_striteri.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c

SBONUS	= ft_lstnew.c \
		  ft_lstadd_front.c \
		  ft_lstsize.c \
		  ft_lstlast.c \
		  ft_lstadd_back.c \
		  ft_lstdelone.c \
		  ft_lstclear.c \
		  ft_lstiter.c \
		  ft_lstmap.c

NAME	= libft.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -c -o

AR 		= ar -rcs

RM		= rm -f

INCLUDE	= libft.h

OBJS	= $(SOURCE:.c=.o)

OBONUS	= $(SBONUS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) $@ $<

$(NAME): $(OBJS) $(INCLUDE)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJS) $(OBONUS) $(INCLUDE)
	$(AR) $(NAME) $(OBJS) $(OBONUS)

.PHONY: all clean fclean re bonus
