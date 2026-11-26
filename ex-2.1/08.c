#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("n1: ");
    scanf("%i", &n1);
    printf("n2: ");
    scanf("%i", &n2);

    printf("Entre n1 e n2: [");
    for (int i = n1; i <= n2; i++)
    {
        printf("\t%i\n", i);
    }
    printf("]\n");

    return 0;
}