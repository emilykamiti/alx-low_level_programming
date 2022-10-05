#!/bin/bash
wget -P /tmp/ https://github.com/emilykamiti/alx-low_level_programming/raw/master/0x18-dynamic_libraries/number.so
export LD_PRELOAD=/tmp/number.so
