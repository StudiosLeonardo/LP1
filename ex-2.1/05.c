#include <stdio.h>

int main(void)
{
    int n;
    printf("Numero: ");
    scanf("%i", &n);

    int s = 0;
    while (n != 0)
    {
        s += n;

        printf("Numero: ");
        scanf("%i", &n);
    }

    printf("Soma: %i", s);

    return 0;
}