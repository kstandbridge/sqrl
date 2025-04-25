#include "xwn.h"

static int64_t
Main()
{
    {
        uint8_t Buffer[256];
        buffer String = FormatBuffer(Buffer, "before %s after\n", "foo สวัสดีชาวโลก bar");
        PlatformWrite(String);
    }

    {
        uint8_t Buffer[256];
        Buffer[0] = 'a';
        Buffer[1] = '\n';
        Buffer[2] = '\0';
        buffer String = FormatBuffer(Buffer, "before %d after\n", 1234567890);
        PlatformWrite(String);
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