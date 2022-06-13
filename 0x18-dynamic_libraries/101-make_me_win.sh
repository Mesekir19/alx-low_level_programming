#!/bin/bash
wget -O /tmp/win.so https://github.com/Mesekir19/holbertonschool-low_level_programming/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
