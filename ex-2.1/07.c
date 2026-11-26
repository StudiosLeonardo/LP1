#include <stdio.h>
#include <string.h>

/* Esse problema seria mais organizado se eu usasse struct, 
   mas como ainda nao vimos isso, resolvi fazer cada indice 
   simbolizar cada time. Mas para os nomes usei ponteiro sim. */

int main(void)
{
    int N = 20;

    // o MAX e o MIN
    char maxID[50], minID[50];
    int maxP = -1, minP = 99999999;

    for (int i = 0; i < N; i++)
    {
        char id[50];
        int v, e, d;

        printf("~~v~~ Time %i: ", i + 1);
        scanf("%s", id);

        printf("Vitorias: ");
        scanf("%i", &v);
        printf("Empates: ");
        scanf("%i", &e);
        printf("Derrotas: ");
        scanf("%i", &d);

        // calcula pontos
        int p = (3 * v) + e;

        // MAX
        if (maxP < p)
        {
            maxP = p;
            strcpy(maxID, id);
        }

        // MIN
        if (p < minP)
        {
            minP = p;
            strcpy(minID, id);
        }
    }

    printf("Maior time: %s\n", maxID);
    printf("Menor time: %s\n", minID);

    return 0;
}