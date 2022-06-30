#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

void swap(char A[], int i, int j){
    char temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

void printArray(char A[], int n){
    int i;
    for(i = 0; i < n; i++)
        cout<<A[i];
    printf("\n");
}
// 数组A从下标为p到下标为q全排列
void perm(char A[], int p, int q){
    // 到了最后一位，此时已经排列完成，输出数组
    if(p == q){
        printArray(A, q+1);
    }

    else{
        int i;
        // 从p到q都必须依次固定到第一位，排列剩下的元素(所以递归要从p+1开始)
        //!! the value of q and i , p is constant ,一次循环输出两个数 123 和 132 
        for(i = p; i <=q; i++){
            swap(A, p, i);
            perm(A, p+1, q);
            // 需要交换回来，否则会有重复的交换
            swap(A, p, i);
        }
    }
}
 
int main(){
    char A[3];
    for(int i = 0; i < 3; i++)
        cin>>A[i];
    perm(A, 0, 2);
    //这段代码首选调用perm函数，进入循环，递归调用perm函数 这个时候输出 123 第二次循环输出 132 
    //后续进入下一个循环 以2作为开头进行排序 。。。。。。
}