//Mila Gallegos 

#include <stdio.h>

int main() {
    int N, i;
    unsigned long long producto = 1;

    // Solicitar el valor de N
    printf("Ingrese el valor de N: ");
    scanf("%d", &N);

    // Calcular el producto
    for (i = 1; i <= N; i++) {
        producto *= i;
    }

    // Imprimir el resultado
    printf("El producto de los primeros %d números naturales es: %llu\n", N, producto);

    return 0;
}
