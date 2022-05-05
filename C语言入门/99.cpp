#include <stdio.h>

int main(void){
int i,j;
for(i=1;i<=9;i++)
{
    for(j=1;j<=9;j++)
    {
        printf("%d*%d=%d\t ",i,j,i*j);
    }
    printf("\n");
}

int a,b;
for(a=1;a<=9;a++)
{
    for(b=1;b<=a;b++)
    {
        printf("%d\t ",a*b);
    }
    printf("\n");
}





    return 0;
}