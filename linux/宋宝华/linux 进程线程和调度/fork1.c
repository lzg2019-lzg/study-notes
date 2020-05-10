
#include <stdio.h>

int main(void)
{
	fork();
	printf("hello1\n");
	fork();
	printf("hello2\n");
	while(1);
}
