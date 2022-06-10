#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;

struct complex_struct{double x,y;} ;

double real_part(struct complex_struct z)
{
    return z.x;
}

double img_part(struct complex_struct z)
{
    return z.y;
}


double magnitute(struct complex_struct z)
{
    return sqrt(z.x*z.x+z.y*z.y);
}

double angle(struct complex_struct z)
{
    return atan2(z.y ,z.x);
}
/* this code is apply to different type,*/
struct complex_struct make_from_real_img(double x, double y)
{
    struct complex_struct z;
    z.x = x;
    z.y = y;
    return z;
}

/* this code is apply to two struct type string add,*/
struct complex_struct add_complex(struct complex_struct z1, struct complex_struct z2)
{
    return make_from_real_img(real_part(z1) + real_part(z2),
                  img_part(z1) + img_part(z2));
}


int main(void)
{
    double x,y;
    printf("typing:");
    cin>>x>>y;
    struct complex_struct z={x,y};
    if (z.x==0)
        {
            printf("z=%fi\n",z.y);
        }
    else if (z.y ==0)
        {
            printf("z=%fi");
        }
    else
            printf("z=%f+%fi",z.x,z.y);
    

}


