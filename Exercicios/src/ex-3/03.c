#include <stdio.h>

int main(void)
{
    int N = 50;
    signed char temps[N];

    int s = 0;
    for (int i = 0; i < N; i++)
    {
        printf("Temperatura %i: ", i);
        scanf("%hhd", &temps[i]);

        if (temps[i] < -100 || temps[i] > 100)
        {
            printf("Fora do intervalo previsto\n");
            return 1;
        }

        s += temps[i];
    }

    float media = (float)s / (float)N;

    int maiores = 0;
    for (int i = 0; i < N; i++)
    {
        if (temps[i] > media)
        {
            maiores++;
        }
    }

    printf("Maiores que a media: %i", maiores);

    return 0;
}