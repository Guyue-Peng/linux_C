#include <stdio.h>  


int hour =23; int minute=59;


void print_time(void)
{
    printf("%d:%d in print_time\n",hour, minute);
}

int main(void)
{
    print_time();
    printf("%d:%d in mian\n",hour,minute);
}
 

