//Mila Gallegos 

#include <stdio.h>

int main() {
    int arreglo[] = {1, 2, 3, 4, 5, 3, 3};  // Arreglo de ejemplo
    int numero, i, contador = 0, n = 7;

    // Solicitar el número a buscar
    printf("Ingrese el número a buscar: ");
    scanf("%d", &numero);

    // Contar cuántas veces se encuentra el número
    for (i = 0; i < n; i++) {
        if (arreglo[i] == numero) {
            contador++;
        }
    }

    // Imprimir el resultado
    printf("El número %d se encuentra %d veces en el arreglo.\n", numero, contador);

    return 0;
}
