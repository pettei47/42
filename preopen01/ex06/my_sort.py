# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    my_sort.py                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkitagaw <tkitagaw@student.42.jp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/25 01:28:49 by tkitagaw          #+#    #+#              #
#    Updated: 2020/05/25 01:52:40 by tkitagaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

d = { 'Hendrix':'1942',
'Allman':'1946',
'King':'1925',
'Clapton':'1945',
'Johnson':'1911',
'Berry':'1926',
'Vaughan':'1954',
'Cooder':'1947',
'Page':'1944',
'Richards':'1943',
'Hammett':'1962',
'Cobain':'1967',
'Garcia':'1942',
'Beck':'1944',
'Santana':'1947',
'Ramone':'1948',
'White':'1975',
'Frusciante':'1970',
'Thompson':'1949',
'Burton':'1939',
}

d2 = sorted(d.items())
d3 = sorted(d2, key = lambda x:x[1])
i = 0
while i < len(d3):
    print(d3[i][0])
    i += 1
