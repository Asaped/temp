# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snadji-h <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 14:19:24 by snadji-h          #+#    #+#              #
#    Updated: 2022/03/28 20:31:04 by snadji-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= Push_swap.c \
			  print_stack.c \
			  Push_swap_reverse_rotate.c \
			  Push_swap_rotate.c \
			  parse_arg.c \
			  ft_split.c \
			  Push_swap_push.c \
			  Push_swap_swap.c \
			  Push_swap_for_three.c \
			  Push_swap_for_five.c \
			  Push_swap_find_max.c \
			  Push_swap_radix.c \
			  Push_swap_simplify.c \

OBJS		= ${SRCS:.c=.o}

NAME		= Push_swap

CC			= gcc

RM			= rm -rf

CFLAGS		= -Wall -Wextra -Werror #-Weverything

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}
norm:	
			norminette ${SRCS} Push_swap.h
clean:	
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
		
