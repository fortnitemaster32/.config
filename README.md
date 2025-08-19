## GOAL 
AS MINIMAL AS POSSIBLE WITHOUT LOOKING LIKE SHIT
### Dependencies
- walrs
- picom
- feh
``` bash
yay -S walrs
sudo pacman -S picom
sudo pacman -S feh
sudo paman -S flameshot
sudo pacman -S pamixer
```
``` bash
feh --bg-fill ~/wallpaper/sekiro.jpg
walrs -i ~/wallpaper/sekiro.jpg
#Recompile all suckless tools to take effect
```
#### Discord fix 
``` bash
sudo vim ~/.config/discord/settings.json
#add to json
"SKIP_HOST_UPDATE": true
```
