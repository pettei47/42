# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    periodic_table.py                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkitagaw <tkitagaw@student.42.jp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/25 09:34:37 by tkitagaw          #+#    #+#              #
#    Updated: 2020/06/02 23:53:45 by tkitagaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

with  open("periodic_table.txt", "r") as src:
    f = str(src.read()).replace("=", ",").replace(":", ",")
tmp = [s.strip() for s in f.split("\n")]
# print(tmp)

i = 0
data = []
while i < len(tmp):
    data.append(tmp[i].split(","))
    i += 1
data.remove([''])
# print(data)

j = 0
d = []
while j < len(data):
    d.append(data[j][::2])
    j += 1
# print(d)
# d == [name, position, number, small, molar, electron] x 118

di = {}
k = 0
for key in d:
    di.setdefault(key[0],key[1::])

# di == {name : [position, number, small, molar, election]} x 118
# -> di == {name : {position : ?, number : ?, small : ?, molar : ?, election  : ?}}

while k < len(d):
    print(di[d[k][0]][1], di[d[k][0]][2])
    k += 1

# print(str(d[0]))

def mktbl(d):
    col = 19
    num = 0
    tbl = [["<tr>"]]
    raw = - 1
    while num < len(d):
        if col == 19:
            col = 1
            k = 0
            raw += 1
            while k < 18:
                tbl[raw].append("<td></td>")
                k += 1
            tbl[raw].append("</tr>")
            tbl.append(["<tr>"])
        if (col - 1) == int(d[num][1]):
            p = str(d[num]).replace(" ', '","</h4><li>") \
                    .replace("', '","</li><li>") \
                    .replace("['","<h4>") \
                    .replace("']","</li>")
            tbl[raw][col] = str(tbl[raw][col].replace('><','>' + p + '<'))
            num += 1
        col += 1
#     d.remove[raw]
    return(tbl)

htmlhead = '''
<!DOCTYPE html>
<html lang="en">
<head>
    <title>Periodic Table</title>
</head>
<body>
    <table border=1>
'''

tbl = mktbl(d)

tmpbody = str(tbl).replace("[","") \
        .replace("]","").replace(",","") \
        .replace("'","").replace('"',"")
# print(tmpbody)
# print(tbl[0],tbl[1])

htmlbody = str(tbl).replace("[","").replace("]","").replace(",","").replace("'","").replace('"',"")

htmlfoot = '''
    </table>
</body>
</html>
'''

# print(htmlbody)

with open("periodic_table.html", "w") as f:
    f.write(htmlhead)
    f.write(htmlbody)
    f.write(htmlfoot)

# with open("periodic_table.html", "r") as f:
#     print(f.read())
