# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/06 15:56:21 by lnicosia          #+#    #+#              #
#    Updated: 2021/01/24 16:14:06 by lnicosia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libmft.a

SRC_DIR = src
OBJ_DIR = obj
INCLUDES_DIR = includes
BIN_DIR = .
OPTI_FLAGS = -O3

SRC_RAW = complex.c complex_base_op.c complex_real_op.c get_intersection.c \
		  get_intersection_line_plane.c segments_intersect.c new_plane.c \
		  matrix_utils.c vector_utils.c matrix_tranformations.c angle_utils.c \
		  vector_init.c geometry_utils.c ft_avg.c ft_var.c ft_dev.c ft_sqrt.c \
		  ft_pow.c

SRC_SIZE = $(shell ls src | wc -l)

HEADERS = libmft.h

SRC = $(addprefix $(SRC_DIR)/, $(SRC_RAW))
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC_RAW:.c=.o))
INCLUDES = $(addprefix $(INCLUDES_DIR)/, $(HEADERS))

ifeq ($(OS), Windows_NT)
	OPTI_FLAGS = -O3
else
    OPTI_FLAGS = -O3 -flto
endif

CFLAGS = -Wall -Wextra -Werror -Wpadded -Wconversion \
			-I $(INCLUDES_DIR) -I ../libft/includes \
			-Wno-unused-result -Wno-misleading-indentation \
			$(OPTI_FLAGS) \
			#-fsanitize=address -g3 \

# Color declarations
RED := "\e[0;31m"
GREEN := "\e[0;32m"
YELLOW := "\e[0;33m"
BLUE := "\e[0;34m"
MAGENTA := "\e[0;35m"
CYAN := "\e[0;36m"
RESET :="\e[0m"

all: $(BIN_DIR)/$(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

I = 1
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDES)
	@printf $(YELLOW)"[$(I)/$(SRC_SIZE)] Compiling $<\n"$(RESET)
	$(eval I=$(shell echo $$(($(I) + 1))))
	gcc -c $< -o $@ $(CFLAGS) 

$(BIN_DIR)/$(NAME): $(OBJ_DIR) $(OBJ)
	@printf "\e[0;36m[INFO] Linking ${NAME}\e[0m\n"
	ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@printf ${GREEN}"[INFO] Linked $(NAME) with success\n"${RESET}

clean: 
	@printf ${CYAN}"[INFO] Removing objs from the libmft\n"${RESET}
	rm -rf $(OBJ_DIR)

fclean: clean
	@printf ${CYAN}"[INFO] Removing $(NAME) from the libmft\n"${RESET}
	rm -rf $(NAME)

re: fclean all

.PHONY: fclean all clean libft
