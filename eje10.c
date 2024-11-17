//Mila Gallegos 

#include <stdio.h>

int main() {
    int numero, i;
    int positivos = 0, negativos = 0, nulos = 0;

    // Leer 100 números
    printf("Ingrese 100 números:\n");
    for (i = 1; i <= 100; i++) {
        printf("Número %d: ", i);
        scanf("%d", &numero);

        // Clasificar el número
        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    // Imprimir los resultados
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
