#ifndef TASFLAGS_H_INCLUDED
#define TASFLAGS_H_INCLUDED

#include "lcf.h"

struct TasFlags {
    int running; // is the game running or on pause
    int speed_divisor; // by how much is the speed reduced
    int recording; // are the input recorded or read
    int fastforward; // is fastforward enabled
    LogCategoryFlag includeFlags; // which flags trigger a debug message
    LogCategoryFlag excludeFlags; // which flags prevent triggering a debug message
};

//const struct TasFlags DEFAULTFLAGS = {0, 1, 0, 0, LCF_ERROR, LCF_NONE};

#endif // TAS_FLAGS_H_INCLUDED