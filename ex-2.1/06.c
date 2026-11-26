#include <stdio.h>

int main(void)
{
    int n;
    printf("n: ");
    scanf("%i", &n);

    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i*i;
    }

    printf("Soma: %i", s);

    return 0;
}