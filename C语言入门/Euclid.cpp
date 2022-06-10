#include <stdio.h>
#include <iostream>
using namespace std;


int GCD(int a,int b)
{
    if(a%b==0)
        return b;
    else   
        return GCD(b,a%b);
}

int main(void)
{
    int a,b;
    printf("Typing :");
    cin>>a>>b;
    printf ("GCCD is :%d",GCD( a,b));

    
}

