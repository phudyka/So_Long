# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 11:36:19 by phudyka           #+#    #+#              #
#    Updated: 2022/06/15 17:49:02 by phudyka          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	so_long

CC			=	gcc

FLAGS		=	-Wall -Wextra -Werror

MLX			=	mlx/Makefile.gen

LFT			=	libft/libft.a

INC			=	-I ./inc -I ./libft -I ./mlx

LIB			=	-L ./libft -lft -L ./mlx -lmlx -lXext -lX11 -lm -lbsd

OBJ			=	$(patsubst src%, obj%, $(SRC:.c=.o))

SRC			=	so_long.c 	\

all:		$(MLX) $(LFT) obj $(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) -o $@ $^ $(LIB)

$(MLX):
			@make -s -C mlx

$(LFT):		
			@make -s -C libft

obj:
			@mkdir -p obj

obj/%.o:	src/%.c
			$(CC) $(FLAGS) $(INC) -o $@ -c $<

clean:
			@make -s $@ -C libft
			@rm -rf $(OBJ) obj

fclean:		clean
			@make -s $@ -C libft
			@rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re