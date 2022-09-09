# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/09 01:50:48 by moduwole          #+#    #+#              #
#    Updated: 2022/09/09 01:50:48 by moduwole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		push_swap

SRC			=		calc_check.c	cost_benefit.c	create.c \
					list_check.c   list_check2.c  operations.c \
					push_swap.c		cost_helper.c	error_check.c \
					main.c libft/*.c \

CC			=		gcc

CFLAGS		=		-Werror -Wextra -Wall

LIBFTDIR	=		libft/

LIBFTA		=		libft.a


all:		$(NAME)

$(NAME):	$(LIBFTA)
	@$(CC) $(CFLAGS) $(SRC) $(LIBFTA) -o $(NAME)
	@rm -f $(LIBFTA)
	@echo "$(NAME) created"

$(LIBFTA):
	@cd ./$(LIBFTDIR) && make all
	@cp libft/libft.a .

clean:
		@cd $(LIBFTDIR) && make fclean

fclean: clean
		@rm -f $(NAME)

re: fclean all