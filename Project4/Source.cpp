#include<stdio.h>

int main() {
	int a;
	printf("Enter a number : ");
	scanf_s("%d", &a);
	for (int i = 1; i <= a; i++) 
	{
		if (i == 1 || i == a) 
		{
			for (int j = 0; j < a; j++) 
			{
				printf("*");
			}
		}
		else 
		{
			printf("*");
			for (int i = 0; i < a - 2; i++) 
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}