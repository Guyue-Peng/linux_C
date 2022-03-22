#include <stdio.h>
/*
只有分配存储空间的变量声明才叫变量定义，其实函数也是一样，编译器只有见到函数定义才会生成指令，而指令在程序运行时当然也要占存储空间
要么按照调用顺序依次编写代码，要么先申明再使用
void newline(void);
void threeline(void);
*/

void newline(void)
{
    printf("\n");
}
void threeline(void)
{
    newline();
    newline();
    newline();
}


int main(void)
{
    printf("Three lines:\n");
    threeline();
    printf("Another three lines.\n");
    threeline();
    return 0;
}

