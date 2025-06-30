# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jissa <jissa@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 17:03:01 by jissa             #+#    #+#              #
#    Updated: 2025/06/30 17:09:03 by jissa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = push_swap

CC      = cc
CFLAGS  = -Wall -Wextra -Werror
RM      = rm -f

SRCS    = create_list.c error_handling.c ft_split.c highest_low_indexes.c highest_low_numbers.c\
          indexing.c push_actions.c push_swap_utils.c push_swap.c radix.c reverseRotate_actions.c\
		  rotate_actions.c small_list_sort.c swap_actions.c

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re