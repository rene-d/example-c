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
       
       int n=0;
       for (int i = 0;i<10000;++i)
            if (rand() % 5)
                n--;
            else
                n++;
       printf("fin %d\n", n);
       
       

    return 0;
}
