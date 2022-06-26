#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define N 50

#define boolean int
#define true 1
#define false 0

int a[N];
void gen_random(int upper_bound, int seed)
{
	srand(seed);//指定种子
	int i;
	for (i = 0; i < N; i++) {
		a[i] = (rand() % upper_bound);
	}
}

void print_random_and_times(int times[])
{
	int i, upper_bound = 10;
	for (i=0; i < N; i++) {
        //printf("%d ,%d\t",a[i],times[a[i]]);
		++times[a[i]];
	}

	for (i = 0; i < upper_bound; i++) {
		printf("%d(%d)  \t", i, times[i]);
	}
	printf("\n");

	boolean isEnd = true;
	while (isEnd) {
		isEnd = false;
		for (i = 0; i <upper_bound; i++) {
			if ((times[i]--) > 0) {
				printf("%s  \t", "*");
				if (times[i] > 0)
					isEnd = true;
			} else {
				printf("%s  \t", " ");
			}
		}
		printf("\n");
	}
}

void print_random()
{
	int i;
	for (i = 0; i < N; i++) {
		printf("%d  \t", a[i]);
		if ((i + 1) % 5 == 0) {
			printf("\n");
		}
	}
}

int main(void)
{
	gen_random(10, time(NULL));

	print_random();
    
    printf("*************tongji**************\n");

	int times[10] ={ };
	print_random_and_times(times);
	return 0;
}
