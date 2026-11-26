#include <stdio.h>

int main(void)
{
    float d;
    printf("Custo do celular (US$):");
    scanf("%f", &d);

    float r = d * 3.17;
    if (r < 0)
    {
        printf("Nao existe dinheiro negativo!\n");
        return 1;
    }
    else if (r <= 1000)
    {
        printf("BOM NEGOCIO\n");
    }
    else
    {
        printf("MAU NEGOCIO\n");
    }

    return 0;
}