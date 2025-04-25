#include "xwn.h"

static int64_t
Main()
{
    buffer String = CStringToBuffer("สวัสดีชาวโลก\n");

    PlatformWrite(String);

    return 0;
}

#include "xwn.c"