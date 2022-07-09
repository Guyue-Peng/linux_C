#include <iostream>
#include <cmath>
using namespace std;


/*
注意  双引号“”  单引号'' 
双引号适用于多文字TXT类型 没有任何计算意义只是显示
单引号则为 符号类型 是需要参与计算或者使用的特殊符号
*/

int main()
{   
   int num1 ,num2;
   char op;
   cout<<"taying num1 :"<<endl;
   cin >>num1;
   cout<<"taying op :"<<endl;
   cin >>op;
   cout<<"taying num2 :"<<endl;
   cin >>num2;

    int result;
    if (op =='-')
        result=num1-num2;
    else if (op =='+')
    {
        result =num1+num2;   
    }
    else if (op =='/')
    {
        result =num1/num2;   
    }
    else if (op =='*')
    {
        result =num1*num2;   
    }
    else
        printf("invalid typing\n");
        

    cout<<result;



}