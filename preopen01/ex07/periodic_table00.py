# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    periodic_table00.py                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: karimura <karimura@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/22 16:59:33 by karimura          #+#    #+#              #
#    Updated: 2020/05/25 02:16:07 by tkitagaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def writeBlankBox():
	print('<td style="border: 1px solid black; padding:10px">')
	print('<h4></h4>')
	print('<ul>')
	print('<li></li>')
	print('<li></li>')
	print('<li></li>')
	print('<li></li>')
	print('<ul>')
	print('</td>')
	



i = 0

print('<table>')
print('<tr>')
for line in open('periodic_table.txt', 'r'):
	line2 = line.split('=')		
	line3 = line2[1].split(',')
	line3[0].split(':')
	while line3[1] > i:
		writeBlankBox()
		i += 1
	print('<h4>',line2[0].strip(),'</h4>')
	print('<ul>')
	print('<li>No',line3[1].split(':'),'</li>')






<table>
<tr>
<td style="border: 1px solid black; padding:10px">
<h4>Hydrogen</h4>
<ul>
<li>No 42</li>
<li>H</li>
<li>1.00794</li>
<li>1 electron</li>
<ul>
</td>
</tr>
</table>
