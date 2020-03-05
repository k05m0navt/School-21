#!/bin/sh
cat /etc/passwd | sed '/^#/d' | sed 's/:\(.*\)//g' | sed -n 'n;p' | rev | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | tr '\n' ' ' | sed 's/ /, /g' | sed 's/\(.*\), /\1./' | sed 's/\n//g'
