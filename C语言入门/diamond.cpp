#include <stdio.h>
#include <iostream>
using namespace std;

int a;
char k;
/*tips! 
The follow code has four valiable, i means line (hang),j means col (lie),
l and p means another col (lie) 
*/
int diamond(int a,char k)
{
    int i,j,l,p;
    if (a%2==0)
        printf("error");
    else
        for (i=1;i<=a/2+1;i++)
        {
            for (j=i;j<=a/2+1;j++)
            {
                printf("1");
            } 
            for (l=1;l<=2*i-1;l++)
            {
                printf("%c",k);
            }
            
         printf("\n");
        }
//-------------------------------------------------------//
            for (i=1;i<=a/2;i++)
            {
                for (j=1;j<=1+i;j++)
                {
                    printf("1");
                
                }
                for (p=1;p<=a-(i*2);p++)
                {
                    printf("%c",k);
                }
                printf("\n");
            }

    return 0;
}


int main(void)
{
    cout<<"tpying a:"<<endl;
    cin>>a>>k;
    diamond(a,k);
}