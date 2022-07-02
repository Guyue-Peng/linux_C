

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char gesture[3][10] = { "scissor", "stone", "cloth" };
    int man, computer, result, ret;

    srand(time(NULL));
    //这条指令的意思是利用系统时间来初始化系统随机数的种子值(rand())，
    //rand函数在产生随机数前，需要系统提供的生成伪随机数序列的种子，
    //rand根据这个种子的值产生一系列随机数。
    //使得每次运行由于时间不同产生而产生不同的随机数序列。
    while (1) {
        computer = rand() % 3;
        //电脑随机（伪随机）产生计算得到123
          printf("\nInput your gesture (0-scissor 1-stone 2-cloth):\n");
        ret = scanf("%d", &man);
          if (ret != 1 || man < 0 || man > 2) {
            printf("Invalid input! Please input 0, 1 or 2.\n");
            continue;
        }
        printf("Your gesture: %s\tComputer's gesture: %s\n", 
            gesture[man], gesture[computer]);

        result = (man - computer + 4) % 3 - 1;
        if (result > 0)
            printf("You win!\n");
        else if (result == 0)
            printf("Draw!\n");
        else
            printf("You lose!\n");
    }
    return 0;
}
