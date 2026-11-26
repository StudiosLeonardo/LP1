#include <stdio.h>

int main(void)
{
    int a,b;
    printf("a: ");
    scanf("%i", &a);
    printf("b: ");
    scanf("%i", &b);

    if (a > b)
    {
        printf("Maior: a\n");
    }
    else if (a < b)
    {
        printf("Maior: b\n");
    }
    else
    {
        printf("Os numeros sao iguais\n");
    }

    return 0;
}
