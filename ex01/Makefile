# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/31 05:10:32 by dtanski           #+#    #+#              #
#    Updated: 2025/07/09 21:46:08 by dtanski          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  ex01

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g 

SRC_DIR = src
OBJ_DIR = obj
SRC =	src/main.cpp \
		src/Fixed.cpp \
		
OBJ = $(SRC:src/%.cpp=obj/%.o)

#TEXT COLORS
GREEN		=	\033[0;32m
RED 		=	\033[0;31m
YELLOW		=	\033[0;33m
RESET		=	\033[0m

all: $(NAME)

$(NAME):$(OBJ)
		@echo "$(RED)[ .. ] Compiling Mandatory..$(RESET)"
		@$(CC) $(CFLAGS) $(OBJ) -o $@
		@echo "$(GREEN)[ OK ]$(RESET) $(YELLOW)Mandatory Ready!$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
		@$(CC) $(CFLAGS) -o $@ -c $<

$(OBJ_DIR):
		@mkdir -p $(OBJ_DIR)
		@echo "OBJ directory created"

clean: 
		@rm -rf $(OBJ_DIR)
		@echo "Object files removed"

fclean: clean
		@rm -rf $(NAME)
		@echo "Binary files removed"

re:		fclean all

.PHONY:	all clean fclean re
