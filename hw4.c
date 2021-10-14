#include <stdio.h>

int Decimial(int n);
int main()
{
    int n;
    printf("Please enter a number:");
    scanf("%d", &n);
    Decimial(n);

    return 0;
}

int Decimial(int n)
{
    if (n == 0 || n == 1)
        printf("%d", n);
    else
    {
        Decimial(n / 2);
        printf("%d", n % 2);
    }
    return 0;
}
