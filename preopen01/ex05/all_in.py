# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    all_in.py                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkitagaw <tkitagaw@student.42.jp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/24 23:07:53 by tkitagaw          #+#    #+#              #
#    Updated: 2020/05/25 01:24:45 by tkitagaw         ###   ########.fr        #
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

i = 1;
if len(args) == 2:
    tmp = [s.strip() for s in args[1].split(",") if not s.strip() == '']

    for src in tmp:
        chk = src.title()
        cap = capital_cities.get(states.get(chk), "non")
        stt = st.get(cp.get(chk), "non")
        if cap == "non" and stt == "non":
            print(src,"is neither a capital city nor a state")
        elif cap == "non" and stt != "non":
            print(chk, "is the capital of", stt)
        else:
            print(cap, "is the capital of", chk)
