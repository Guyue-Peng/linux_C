#include <stdio.h>
#include <stdlib.h>

int count1[4] = { 3, 2, 1,0}, count2[4],i,a;
int main(void)
{

    for (i = 0; i < 4; i++) 
        count2[i] = count1[i];
    for (a = 0; a < 4; a++)
        printf("count2[%d]=%d\n", a, count2[a]);
    return 0;
}

