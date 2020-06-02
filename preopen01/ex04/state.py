# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    state.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkitagaw <tkitagaw@student.42.jp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/24 22:38:44 by tkitagaw          #+#    #+#              #
#    Updated: 2020/05/24 23:04:27 by tkitagaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys

args = sys.argv

states = {
"Oregon" : "OR",
"Alabama" : "AL",
"New Jersey": "NJ",
"Colorado" : "CO"
}
capital_cities = {
"OR": "Salem",
"AL": "Montgomery",
"NJ": "Trenton",
"CO": "Denver"
}

def swapdict(d):
    return {v: k for k,v in d.items()}

st = swapdict(states)
cp = swapdict(capital_cities)

if len(args) == 2:
    print(st.get(cp.get(args[1]), "Unknown capital city"))
