#!/bin/bash
 ifconfig -a | grep -o 'ether [[:xdigit:]:]*'
