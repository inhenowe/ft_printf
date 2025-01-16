# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/28 15:18:44 by aleortiz          #+#    #+#              #
#    Updated: 2025/01/15 17:54:32 by aleortiz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nombre libreria compilada
NAME = libftprintf.a

#Flas para compilar la libreria
LIBCC = ar rcs

#Flags compilar los punto cc
CFLAGS = -Wall -Werror -Wextra -I$(LIBFT_D)

#Comando para remover archivos innecesarios 
RM = rm -f

#Caminos de ficheros
LIBFT_D = ./libftb
OBJ_D = ./OBJ
SRC_D = ./src

#Conversión de variables 
FILES = $(wildcard $(SRC_D)/*.c)
OBJ = $(FILES:.c=.o)

#Reglas del make
all: $(NAME)

makelibft : 
	@mkdir -p $(OBJ_D)
	@make -C $(LIBFT_D)
	@cp $(LIBFT_D)/libft.a .
	@mv libft.a $(NAME)

$(OBJ_D)/%.o : $(SRC_D)/%.c	
	@cc $(CFLAGS) -c $< -o $@

$(NAME): makelibft $(OBJ)
	@mv $(LIBFT_D)/*.o $(OBJ_D)
	@mv $(OBJ) $(OBJ_D)
	@$(LIBCC) $(NAME) $(OBJ_D)/*.o

clean:
	@$(RM) -R $(OBJ_D)
	@make clean -C $(LIBFT_D)

fclean: clean
	@$(RM) $(LIBFT_D)/libft.a
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re	
