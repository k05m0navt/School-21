#!/bin/sh
groups $FT_USER | sed 's/ /,/g' | tr -d '\n' | tr -d '%'

