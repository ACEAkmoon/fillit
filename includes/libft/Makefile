# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akrushin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 13:53:43 by akrushin          #+#    #+#              #
#    Updated: 2018/02/19 13:53:49 by akrushin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

NOC		= \033[0m
OKC		= \033[32m
ERC		= \033[31m
WAC		= \033[33m
TSC		= \033[94;1m

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

SRC		= ft_lstmap.c ft_stralloc.c ft_strncpy.c ft_atoi.c ft_lstnew.c\
	ft_strcat.c ft_strndup.c ft_bubblesort.c ft_memalloc.c ft_strchr.c\
	ft_strnequ.c ft_bubblesort_int.c ft_memccpy.c ft_strclr.c ft_strnew.c\
	ft_bzero.c ft_memchr.c ft_strcmp.c ft_strnstr.c ft_isalnum.c ft_memcmp.c\
	ft_strcpy.c ft_strrchr.c ft_isalpha.c ft_memcpy.c ft_strdel.c ft_strsplit.c\
	ft_isascii.c ft_memdel.c ft_strdup.c ft_strstr.c ft_isdigit.c ft_memmove.c\
	ft_strequ.c ft_strsub.c ft_islower.c ft_memset.c ft_striter.c ft_strtrim.c\
	ft_isprint.c ft_putchar.c ft_striteri.c ft_swap.c ft_isspace.c ft_putchar_fd.c\
	ft_strjoin.c ft_tolower.c ft_isupper.c ft_putendl.c ft_strlcat.c ft_toupper.c\
	ft_itoa.c ft_putendl_fd.c ft_strlen.c ft_lstadd.c ft_putnbr.c ft_strmap.c\
	ft_lstdel.c ft_putnbr_fd.c ft_strmapi.c ft_lstdelone.c ft_putstr.c ft_strncat.c\
	ft_lstiter.c ft_putstr_fd.c ft_strncmp.c ft_arrcount.c ft_arrdel.c

OBJ		= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo "$(OKC)LIBFT ready$(NOC)"

%.o: %.c
		@$(CC) -c $< -o $@ $(CFLAGS)
		@echo -n =

clean:
		@rm -f $(OBJ)
		@echo "$(WAC)Removing OBJ path$(NOC)"

fclean: clean
		@rm -f $(NAME)
		@echo "$(WAC)Removing Libft.a$(NOC)"

re:		fclean 
		$(MAKE) all

.PHONY: all, $(NAME), clean, fclean, re
