#include <stdio.h>
#include<iostream>
using namespace std;

/* notice! struct ????(complex_struct or rational  is overall) 
*/




struct rational {int x, y;} ;

int GCD(int a,int b)
{
    if(a%b==0)
        return b;
    else   
        return GCD(b,a%b);
}

int frist_part(struct rational z)
{
    return z.x;
}

int second_part(struct rational z)
{
    return z.y;
}

void print_rational(struct rational z)
{
    printf("%d / %d\n",z.x,z.y);
    return;
}


struct rational make_rational(int x, int y)
{
    struct rational z;
    z.x = x;
    z.y = y;
    return z;
}


struct rational add_rational(struct rational z1, struct rational z2)
{
    return make_rational((frist_part(z1) + frist_part(z2))/GCD(frist_part(z1) + frist_part(z2),second_part(z1)),
                  second_part(z1)/GCD(frist_part(z1) + frist_part(z2),second_part(z1)));
}

struct rational sub_rational(struct rational z1, struct rational z2)
{
    return make_rational((frist_part(z1) - frist_part(z2))/GCD(frist_part(z1) - frist_part(z2),second_part(z1)),
                  second_part(z1)/GCD(frist_part(z1) - frist_part(z2),second_part(z1)));
}


struct rational mul_rational(struct rational z1, struct rational z2)
{
    return make_rational((frist_part(z1) * frist_part(z2))/GCD(frist_part(z1) * frist_part(z2),second_part(z1)*second_part(z2)),
                  (second_part(z1)*second_part(z2))/GCD(frist_part(z1) * frist_part(z2),second_part(z1)*second_part(z2)));
}

struct rational div_rational(struct rational z1, struct rational z2)
{
    return make_rational((frist_part(z1) * second_part(z2))/GCD(frist_part(z1) *second_part(z2),second_part(z1)*frist_part(z2)),
                  (second_part(z1)*frist_part(z2))/GCD(frist_part(z1) *second_part(z2),second_part(z1)*frist_part(z2)));
}





int main(void)
{
    int x,y;
    printf("input:");
    cin>>x>>y;
    struct  rational a = make_rational(x,y);
    struct  rational b = make_rational(x,y);
    print_rational(add_rational(a, b));
    print_rational(sub_rational(a, b));
    print_rational(mul_rational(a, b));
    print_rational(div_rational(a, b));

    return 0;
}
