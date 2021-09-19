#include <stdio.h>
int main()
{
	int num1, num2;
	int result1, result2, result3;

	printf("µÎ Á¤¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä. :");
	scanf("%d,%d", &num1, &num2);

	result1 = num1 & num2;
	result2 = num1 | num2;
	result3 = num1 ^ num2;

	printf("%d & %d= %d\n",num1,num2, result1);
	printf("%d | %d= %d\n",num1,num2, result2);
	printf("%d ^ %d= %d\n",num1,num2, result3);

	return 0;
	
}
