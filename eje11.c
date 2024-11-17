//Mila Gallegos 

#include <stdio.h>

int main() {
    int suma = 0, i;

    // Calcular la suma de pares entre 10 y 50
    for (i = 10; i <= 50; i += 2) {
        suma += i;
    }

    // Imprimir el resultado
    printf("La suma de los números pares entre 10 y 50 es: %d\n", suma);

    return 0;
}
