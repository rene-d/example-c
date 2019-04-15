#include <stdio.h>
#include <stdlib.h>

static int t = 1;

int main()
{
    if (t)
        printf("on this line\n");
    else
        printf("but not here\n");
        
       puts("il passera ici");
       puts("il repassera par là");
       
       if (t == 0)
       {
       puts("mais pas ici!!!");
       }
       
       for (int i = 0;i<100;++i)
       if (rand() % 2)
       putchar('.');
       printf("fin\n");
       
       

    return 0;
}
