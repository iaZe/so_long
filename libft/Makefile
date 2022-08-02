# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/13 00:16:41 by dantavar          #+#    #+#              #
#    Updated: 2022/07/05 00:34:38 by dantavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc 
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a
SRCS = ft_atoi.c ft_isdigit.c ft_memmove.c ft_strlcat.c ft_strtrim.c \
	   ft_bzero.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_strdup.c \
	   ft_calloc.c ft_split.c ft_strcat.c ft_strlen.c ft_tolower.c ft_itoa.c \
	   ft_isalnum.c ft_memchr.c ft_strchr.c ft_strncmp.c ft_toupper.c \
	   ft_isalpha.c ft_memcmp.c ft_strnstr.c ft_isascii.c ft_substr.c\
	   ft_memcpy.c ft_strjoin.c ft_strrchr.c ft_putchar_fd.c ft_strcpm.c\
	   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c \
	   ft_strmapi.c
OBJS = $(SRCS:.c=.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
.PHONY: all re fclean clean