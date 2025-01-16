# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/10 12:40:11 by aleortiz          #+#    #+#              #
#    Updated: 2025/01/09 14:26:09 by aleortiz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#nombre del archivo ha ejecutar
NAME=libft.a

#comando para compilar como libreria
AR=ar rcs

#flags con las que se compilara las librerias
CFLAGS=-Wall -Werror -Wextra

#eliminas los archivos creados
RM=rm -f

#archivos a ejecutar

FILES = ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c\
		ft_memmove.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_strlcpy.c\
		ft_memchr.c\
		ft_strnstr.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c
	
		
OBJS=$(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $?

%.o: %.c
	@cc -c $(CFLAGS) $?

clean:
	@$(RM) $(OBJS) 

fclean: clean
	@$(RM) $(NAME)

re: fclean all

bonus: $(OBJS) 
	$(AR) $(NAME) $(OBJS)

.PHONY: all clean fclean re bonus
