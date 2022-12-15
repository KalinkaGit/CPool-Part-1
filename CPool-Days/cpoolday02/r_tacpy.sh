#! /bin/sh
cut -d: -f 1 | sed -n 2~2p | rev | sort -r | head -n $MY_LINE2 | tail -n +$MY_LINE1 | sed ':x;N;s/\n/, /g;bx' | sed a\. | sed 'N;s/\n//'
