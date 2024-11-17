//Mila Gallegos 

#include <stdio.h>

int main() {
    int arreglo[100], i;

    // Almacenar los primeros 100 números pares en el arreglo
    for (i = 0; i < 100; i++) {
        arreglo[i] = 2 * (i + 1);  // Los números pares
    }

    // Imprimir el arreglo
    printf("Los primeros 100 números pares son:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    return 0;
}
