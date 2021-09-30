#include<stdio.h>
int main()
{

	double k = 0;
	double result = 0;

	printf("please enter kilometers: ");
	scanf("%lf", &k);

	result = k / 1.609;
	printf("%.1f km is equal to %.1f miles",k,result);
	return 0;
}
