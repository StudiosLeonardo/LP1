#include <stdio.h>

int main(void)
{
    float mph;
    printf("Milhas por hora: ");
    scanf("%f", &mph);

    float kph = mph * 1.6;
    if (kph < 0)
    {
        printf("Velocidade negativa eh contra-intuitiva nesse caso!\n");
        return 1;
    }
    else if (kph < 80)
    {
        printf("ACELERE\n");
    }
    else if (kph >= 80 && kph <= 100)
    {
        printf("MANTENHA\n");
    }
    else
    {
        printf("DESACELERE\n");
    }

    return 0;
}