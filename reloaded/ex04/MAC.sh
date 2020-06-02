ifconfig | grep -o "ether .*" | sed -e 's/ether\ //g' | sed -e 's/\ //g'
