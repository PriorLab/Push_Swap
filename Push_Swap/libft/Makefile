# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/24 11:59:29 by alemigue          #+#    #+#              #
#    Updated: 2025/11/09 12:22:35 by alemigue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a

INC 	:= libft.h

SRC	:= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	   ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
	   ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	   ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
	   ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
	   ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
	   ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
	   ft_toupper.c ft_strlcat.c ft_tolower.c

SRCB	:= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
	   ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c\
	   ft_lstmap.c
	   

OBJ	:= $(SRC:.c=.o)
OBJB	:= $(SRCB:.c=.o)

CC	:= cc
CFLAGS	:= -Wall -Wextra -Werror
AR	:= ar rcs    
		#ar-archiver(cria biblio estaticas .a que sao biblio que agrupam varios .o -->cria libft.a basicamente)
		#r-replace(.o -->.a, ou cria o ficheiro .o caso nao exista)
		#c-create(cria biblioteca se ela ainda nao existir)
		#s-gera um indice interno da biblioteca
RM	:= rm -rf
#funciona como a main 
#primeiro vem sempre o target e depois vem as dependencies
all:	$(NAME)

$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)
#$(NAME) expande o target para a libft.a; e um requisito que ainda nao foi compilado

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(OBJB)

fclean: clean
	$(RM) $(NAME)


re: fclean all

bonus: $(OBJB)
	@make OBJ="$(OBJB)" all
