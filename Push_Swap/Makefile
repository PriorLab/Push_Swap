# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/09 15:23:41 by alemigue          #+#    #+#              #
#    Updated: 2026/03/09 15:24:50 by alemigue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

INC			= includes/push_swap.h

SRC			= srcs/main.c \
			  srcs/parsing.c \
			  srcs/stack_init.c \
			  srcs/indexing.c \
			  srcs/operations/push.c \
			  srcs/operations/swap.c \
			  srcs/operations/rotate.c \
			  srcs/operations/reverse_rotate.c \
			  srcs/algorithms/sort_small.c \
			  srcs/algorithms/radix.c \
			  srcs/utils/stack_utils.c \
			  srcs/utils/error.c \
			  srcs/utils/free.c

OBJ			= $(SRC:.c=.o)

LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) -L$(LIBFT_DIR) -lft -o $(NAME)

%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
