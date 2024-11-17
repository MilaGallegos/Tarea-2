//Mila Gallegos 

#include <stdio.h>

int main() 
{
    int arreglo[] = {1, -2, 3, 0, -5};  // Arreglo de ejemplo
    int positivos = 0, negativos = 0, nulos = 0, i, n = 5;

    // Contar cuántos números son positivos, negativos o nulos
    for (i = 0; i < n; i++) 
    {
        if (arreglo[i] > 0) 
        {
            positivos++;
        } else if (arreglo[i] < 0)
        {
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
