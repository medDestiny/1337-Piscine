#!/bin/sh
#groups $FT_USER | tr ' ' ',' <= another method ;)
id -Gn $FT_USER | tr ' ' ',' | tr -d "\n"