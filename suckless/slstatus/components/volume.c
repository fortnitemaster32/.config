#include <stdio.h>
#include <stdlib.h>
#include "../util.h"

const char *
vol_perc(const char *unused)
{
    static char buf[32];
    int vol = atoi(run_command("pamixer --get-volume"));
    int muted = atoi(run_command("pamixer --get-mute"));
    if (muted)
        snprintf(buf, sizeof(buf), "MUTE");
    else
        snprintf(buf, sizeof(buf), "%d%%", vol);
    return buf;
}

