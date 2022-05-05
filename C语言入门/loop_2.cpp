#include <stdio.h>


int main(void)
{
    int a,b;
    for (a=1;a<=100;a++)
    {
        for (b=2;b<a;b++)
            if(a%b==0)
                break;
        if(b==a)
            printf("This is odd number:%d\n",b);
        else 
            printf("%d\n",b);
         
    }
    return 0;
}