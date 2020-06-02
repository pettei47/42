find . -type f -name "*.sh" -print | sed -e 's/\.sh//g' | awk -F"/" '{print $NF}'
