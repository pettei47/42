# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkitagaw <tkitagaw@student.42.jp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/25 08:58:50 by tkitagaw          #+#    #+#              #
#    Updated: 2020/05/25 09:04:13 by tkitagaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

s = 'New file\nNew line'

with open("./test.html", 'w') as f:
    f.write(s)

with open("test.html") as f:
    print(f.read())
