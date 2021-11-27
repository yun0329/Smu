#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];

    int cnt = 0;

    int i;

    printf("input>");

    gets(str);
    


    for (i = 0; str[i] != '\0'; i++)
    {

        if ((str[i] >= 'A') && (str[i] <= 'Z'))
        {
            str[i] += ('a' - 'A');
            cnt++;

        }
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;

    }


    printf("output> ");
    
    puts(str);

	return 0;
}
