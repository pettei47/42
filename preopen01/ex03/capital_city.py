# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    capital_city.py                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkitagaw <tkitagaw@student.42.jp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/24 22:38:44 by tkitagaw          #+#    #+#              #
#    Updated: 2020/05/24 22:49:31 by tkitagaw         ###   ########.fr        #
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

if len(args) == 2:
    print(capital_cities.get(states.get(args[1]), "Unknown State"))
