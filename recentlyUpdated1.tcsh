#!/bin/tcsh

set date = `date +%F`
set ym = `echo $date | cut -c 1-7` # substring consisting of first 7 characters
ls -a --full-time | awk '{print $6,$9}' | grep $ym
