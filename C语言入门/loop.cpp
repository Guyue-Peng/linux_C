#include <stdio.h>
#include <iostream>
using   namespace std;


/*
if condition is true the follow code will be run ,
then test condition weather is true, 
*/
int n;
int factorial(int n)
{
    int r1=1;
    while (n>0)
    {
        r1=r1*n;
        n=n-1; /*essential code*/
    }
    return r1;
}

int x;
int dead_loop(int x)
{
    while (x!=1){
        if (x%2==0){
            x=x/2;
            printf("%d",x);
        }else{
            x=3*x+1;
            printf("%d",x);
        }
    }
    return x ;
}

int y;
int count(){
    int a=0;
    int y=0;
    
    while (a<=100)
    {
        if (a/10==9)
        {y++;
       
        }
        if (a%10==9)
         {y++;
         }
        a++;
    
    }
return y;
}
int j;
int sushu(int j)
{
    int k;
    for (k=2;k<j;k++)
        if (j%k==0)
            break;
    if (j==k){
        
        printf("sushu%d",k);
        return 1;
    }
        
        
    else 
        return 0;
}








int main(void)
{
    cout<<"typing x:"<<endl;
    cin>>x;
    printf("\n result is %d\n",dead_loop(x));
    printf("is %d\n",count());
    for (j=1;j<=97;j++){
        if (!sushu(j))
            continue;
        printf("%d\n",j);
    }
    return 0;
   
}