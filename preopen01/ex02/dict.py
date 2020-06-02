# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    dict.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkitagaw <tkitagaw@student.42.jp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/24 20:31:36 by tkitagaw          #+#    #+#              #
#    Updated: 2020/05/24 22:18:53 by tkitagaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

data = [['Caleb' , 24],
['Calixte' , 84],
['Calliste', 65],
['Calvin' , 12],
['Cameron' , 54],
['Camil' , 32],
['Camille' , 5],
['Can' , 52],
['Caner' , 56],
['Cantin' , 4],
['Carl' , 1],
['Carlito' , 23],
['Carlo' , 19],
['Carlos' , 26],
['Carter' , 54],
['Casey' , 2]]

# print(data[0][1])

i = 0
d = {}
while i < len(data):
    d.setdefault(data[i][1],[]).append(data[i][0].replace("'", ""))
    i += 1

for out in d.keys():
    word = str(d[out]).replace("]", "")
    word = word.replace("'","")
    print(out, ":", word.replace("[",""))
