# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkitagaw <tkitagaw@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/28 01:21:13 by tkitagaw          #+#    #+#              #
#    Updated: 2020/04/28 03:38:28 by tkitagaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GC		= gcc
FRAGS	= -Wall -Wextra -Werror
PROGRAM	= ft_display_file
SRCS	= ./*.c
OBJS	= ./*.o

all : $(PROGRAM)

$(PROGRAM) : $(OBJS)
	$(GC) -o $(PROGRAM) $(OBJS)

$(OBJS) :
	$(GC) $(FLAGS) -c $(SRCS)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(PROGRAM)

re : fclean  all

.PHONY: all clean fclean re
