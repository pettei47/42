# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkitagaw <tkitagaw@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/28 01:21:13 by tkitagaw          #+#    #+#              #
#    Updated: 2020/04/28 02:26:06 by tkitagaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GC		= gcc
FRAGS	= -Wall -Wextra -Werror
PROGRAM	= libft.a
SRCS	= srcs/*.c
OBJS	= ./*.o

all : $(PROGRAM)

$(PROGRAM) : $(OBJS)
	ar -rc $(PROGRAM) $(OBJS)
	ranlib $(PROGRAM)

$(OBJS) :
	$(GC) $(FLAGS) -Iincludes -c $(SRCS)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(PROGRAM)

re : fclean  all

.PHONY: all clean fclean re
