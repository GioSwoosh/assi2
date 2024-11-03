#include "types.h"

#define T_DIR 1
#define T_FILE 2
#define T_DEV 3

struct stat {
    short type;
    int dev;
    uint ino;
    short nlink;
    uint size;
}