#include <stdio.h>
#include <stdlib.h>
#define N 100000 /*appear N means 20 */

int a[N];
void gen_random(int upper_bound)
{
    int i;
    for (i=0;i<N;i++)
        a[i]=rand() % upper_bound;/*余数*/
}

int howmany(int value)
{
    int count = 0, i;
    for (i = 0; i < N; i++)
        if (a[i] == value)
            ++count;
    return count;
}

void print_random()
{
    int i;
    for (i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");/* without this code will add signal % at end of output */
}

int main(void)
{
    int i;
    gen_random(10);
    printf("value\thow many\n");
    for (i = 0; i < 10; i++)
        printf("%d\t%d\n", i, howmany(i));
   
    return 0;
}
    