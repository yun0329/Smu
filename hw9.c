#include<stdio.h>
void ClearLineFromReadBuffer(void)
{
	while (getchar()!= '\n');
}


typedef struct
{
	char name[20];
	char country[20];
	int population;
}City;


int main(void)
{
	printf("input three cities: \n");
	City arr[3];

	for (int i = 0; i < 3; i++) {
		printf("Name> ");
		scanf_s("%s", arr[i].name, sizeof(arr[i].name));
		printf("Country> ");
		scanf_s("%s", arr[i].country, sizeof(arr[i].country));
		ClearLineFromReadBuffer();
		printf("Population> ");
		scanf_s("%d", &arr[i].population);
		ClearLineFromReadBuffer();
	}
	
	for (int i = 0; i < 3; i++) {
		
		printf("%d.%s in %s with a population of %dpeople\n",i+1, arr[i].name, arr[i].country, arr[i].population);
	}
	return 0;
}
