#!/bin/bash
wget -O /tmp/gm.so https://github.com/Mesekir19/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/gm.so
