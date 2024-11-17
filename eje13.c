//Mila Gallegos 

#include <stdio.h>

int main() {
    int arreglo[] = {1, 2, 3, 4, 5};  // Arreglo de ejemplo
    int suma = 0, n = 5, i;

    // Calcular la suma de los elementos del arreglo
    for (i = 0; i < n; i++) {
        suma += arreglo[i];
    }

    // Imprimir el resultado
    printf("La suma de los elementos es: %d\n", suma);

    return 0;
}
