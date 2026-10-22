// #include <stdio.h>
#include <unistd.h>

int main()
{

    const void *buf1 = "hello kernel\n";
    const void *buf2 = "this is error\n";

    if (write(1, buf1, 13) == -1)
    {
        return 1;
    }
    if (write(2, buf2, 14) == -1)
    {
        return 1;
    }
    return 0;
}