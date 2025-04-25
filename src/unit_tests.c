#include "xwn.h"

static int64_t
Main()
{

    {
        WriteFormat("%s(%d): some message\n", __FILE__, __LINE__);
    }
    
    {
        buffer Str1 = CStringToBuffer("สวัสดีชาวโลก");
        buffer Str2 = CStringToBuffer("สวัสดีชาวโลก");

        if(BuffersAreEqual(Str1, Str2))
        {
            PlatformWrite(CStringToBuffer("Buffers are equal\n"));
        }
        else
        {
            PlatformWrite(CStringToBuffer("Buffers are not equal\n"));
        }
    }

    {
        buffer Str1 = CStringToBuffer("foo");
        buffer Str2 = CStringToBuffer("foobar");

        if(BuffersAreEqual(Str1, Str2))
        {
            PlatformWrite(CStringToBuffer("Buffers are equal\n"));
        }
        else
        {
            PlatformWrite(CStringToBuffer("Buffers are not equal\n"));
        }
    }

    return 0;
}

#include "xwn.c"