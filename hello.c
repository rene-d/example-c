#include <stdio.h>

static int t = 1;

int main()
{
for (int i = 0; i < 10; ++i)
    if (t)
        printf("on this line\n");
    else
        printf("but not here\n");

    return 0;
}
