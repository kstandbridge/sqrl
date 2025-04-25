#include "xwn.h"

static int64_t
Main()
{
    {
        buffer Str1 = CStringToBuffer("foo bar bas");
        buffer Str2 = CStringToBuffer("foo bar bas");

        AssertEqualString(Str1, Str2);
    }

    {
        buffer Str1 = CStringToBuffer("สวัสดีชาวโลก");
        buffer Str2 = CStringToBuffer("สวัสดีชาวโลก");

        AssertNotEqualString(Str1, Str2);
    }

    {
        buffer Str1 = CStringToBuffer("foo");
        buffer Str2 = CStringToBuffer("foobar");

        AssertEqualString(Str1, Str2);
    }

    return 0;
}

#include "xwn.c"