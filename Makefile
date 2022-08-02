# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 00:13:18 by dantavar          #+#    #+#              #
#    Updated: 2022/07/11 21:16:03 by dantavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
LIBFT = libft/libft.a
FLAGS = -Wall -Wextra -Werror
SRCS =   so_long.c errors.c map.c utils.c keys.c motion.c gnl/get_next_line.c gnl/get_next_line_utils.c

INC =   so_long.h gnl/get_next_line.h

LIB = -L ./libft -lft -Imlx -Lmlx -lmlx -lXext -lX11

OBJS = $(SRCS:.c=.o)
RM = rm -rf

all: $(NAME)

$(NAME):
	cd libft/ && make
	cd mlx/ && ./configure
	gcc $(FLAGS) -o $(NAME) $(SRCS) $(LIB)

skiperror:
	gcc -o $(NAME) $(SRCS) -g $(LIB)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
.PHONY: all re fclean clean