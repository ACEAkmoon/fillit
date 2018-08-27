# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akrushin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/25 16:23:08 by akrushin          #+#    #+#              #
#    Updated: 2018/08/25 16:23:09 by akrushin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= fillit

NOC			= \033[0m
OKC			= \033[32m
ERC			= \033[31m
WAC			= \033[33m
TSC			= \033[94;1m

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra

INC_PATH	= ./includes/
LFT_PATH	= ./includes/libft/
OBJ_PATH	= ./objects/
SRC_PATH	= ./resources/

OBJECTS		= $(RESOURCES:.c=.o)
RESOURCES	= main.c reader.c recorder.c checker.c map.c output.c solver.c

INC_PFIX	= $(addprefix -I,$(INC_PATH))
OBJ_PFIX	= $(addprefix $(OBJ_PATH),$(OBJECTS))
SRC_PFIX	= $(addprefix $(SRC_PATH),$(RESOURCES))

all: $(NAME)

$(NAME): $(OBJ_PFIX)
	@echo
	@make -C $(LFT_PATH)
	@$(CC) -o $(NAME) $(OBJ_PFIX) -lm -L $(LFT_PATH) -lft
	@echo "$(OKC)Fillit ready$(NOC)"


$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(CFLAGS) $(INC_PFIX) -o $@ -c $<
	@echo -n =

clean:
	@make -C $(LFT_PATH) clean
	@rm -rf $(OBJ_PATH)
	@echo "$(WAC)Removing fillit OBJECTS path$(NOC)"

fclean: clean
	@make -C $(LFT_PATH) fclean
	@rm -f $(NAME)
	@echo "$(WAC)Removing fillit executable$(NOC)"

re: fclean 
	$(MAKE) all

.PHONY: all, $(NAME), clean, fclean, re
