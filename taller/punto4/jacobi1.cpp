#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int *puntero = &matriz[0][0]; // Puntero apuntando al primer elemento de la matriz

    printf("Elementos de la matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(puntero + i * 3 + j)); // Acceso al elemento usando aritmética de punteros
        }
        printf("\n");
    }

    return 0;
}

