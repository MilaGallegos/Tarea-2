//Mila Gallegos 

#include <stdio.h>

int main() {
    int N, i;

    // Solicitar el número
    printf("Ingrese un número entero: ");
    scanf("%d", &N);

    // Generar y mostrar la tabla de multiplicar
    printf("Tabla de multiplicar del %d:\n", N);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
