#!/bin/bash
wget -P /tmp https://github.com/Reem3055/alx-low_level_programming/raw/master/0x18-dynamic_libraries/1-create_dynamic_lib.sh
export LD_PRELOAD=/tmp/libgiga.so
