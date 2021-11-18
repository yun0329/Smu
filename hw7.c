#include<stdio.h>
#include <math.h>
double pow(double a, double b); 
double sqrt(double x);

float Q(float* num)
{
	float value = 0;
	float total = 0;

	for (int i = 0; i < 5; i++) {
		total += num[i];

	}
	total = total / 5;

	for (int i = 0; i < 5; i++)
	{
		value += (num[i] - total) * (num[i] - total);
	}
	return sqrt(value / 5);
}

int main()
{
	float su[5];
	float value1;
	printf("Enter 5 real numbers: ");
	scanf("%f %f %f %f %f", &su[0], &su[1], &su[2], &su[3], &su[4]);
	value1 = Q(su);

	printf("%.3f", value1);



	return 0;
}
