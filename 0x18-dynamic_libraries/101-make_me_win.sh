#!/bin/bash
wget -P /tmp/gm.so https://github.com/Mesekir19/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/gm.so
export LD_PRELOAD=/tmp/gm.so
