#!/bin/sh
ifconfig | grep ether | cut -d 'r' -f 2 | cut -s -d ' ' -f 2
