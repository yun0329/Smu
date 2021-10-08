#include<stdio.h>
int main(void)
{
	int prime_number;
	int num;

	printf("please enter a number: ");
	scanf("%d", &prime_number);

	for (num=2; num <= prime_number; num++)
	{
		if (prime_number==num)
		{
			printf("It is a prime number.");
			break;
		}

		if (prime_number % 2 == 0)
		{
			printf("It is not a prime number.");
			break;
		}
	}
	return 0;
}
