#!/bin/sh
backlight="/sys/class/backlight/amdgpu_bl1"
brightness=$(cat $backlight/brightness)
max=$(cat $backlight/max_brightness)
percent=$(( brightness * 100 / max ))
echo "$percent%"

