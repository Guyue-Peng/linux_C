#include <stdio.h>
#include <math.h>
#include <iostream>
/*
&& and   || or  != not

the different between int,double  and void is the value of return .
return 0/1/2 ,return 0.2/0.3/000.8/ return nothing.
*/


float x;
using namespace std;

void print_logarithm(float x)
{
    if (x <= 0.0){
    printf("x is invaild\n");
    return;
    }
    printf("log(x)=%f\n",log(x));
}

int y;
/*
True 1 | False 0 why use int not void is a question.
int return value is a int not function or character. printf("1\n");
*/
int is_even(int y)
{
    if(y%2 == 0)
        {
            printf("1\n");
        return 1;
    }else
        {
            printf("0\n");
        return 0;
        }  

}

int z; 
int is_leap_year( int z)
{
    if (z%4 == 0 && z%100 != 0 | z%400 == 0)
    {
        printf("run \n");
    }
    else 
    {
        printf("bu run \n");
    }
    return 0;
}

double a;
/*
ceil -- floor -- 0 -- ceil -- floor  
*/
double myround(double a )
{
    if(a <=0)
    {
        printf("negative\n%f\n",floor(a));

    }
    else
    {
        printf("positive\n%f\n",ceil(a));
    }
    return 0.000000 ;
}

int main(void)
{
    cout <<"typing x:"<<endl;
    cin>>x>>y>>z>>a;
    print_logarithm(x);
    is_even(y);
    is_leap_year(z);
    myround(a);
    return 0;
} 

