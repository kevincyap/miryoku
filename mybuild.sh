cd ~/repos/Keebs/zmk/app
west build -d build/left -b nice_nano_v2 -- -DSHIELD=corne_left -DZMK_CONFIG=/home/kevin/repos/Keebs/miryoku/config
west build -d build/right -b nice_nano_v2 -- -DSHIELD=corne_right -DZMK_CONFIG=/home/kevin/repos/Keebs/miryoku/config