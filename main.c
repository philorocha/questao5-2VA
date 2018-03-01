#include <stdio.h>
#include <stdlib.h>

int ordenado(int vetor[], int tam) {
    int res = 1, pos = vetor[0], i;

    for (i = 1; i < tam; i++) {
        if (pos > vetor[i]) {
            res = 0;
            break;
        }
        pos = vetor[i];
    }

    return res;
}

int main()
{
    int vetor[] = {2, 1, 3, 4};

    printf("%d\n", ordenado(vetor, 4));
    return 0;
}
