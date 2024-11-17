//Mila Gallegos 

#include <stdio.h>

int main() {
    float num1, num2, suma, resta, multiplicacion;

    // Solicitar los números al usuario
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    // Realizar las operaciones
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    // Mostrar los resultados
    printf("\nResultados:\n");
    printf("Suma: %.2f\n", suma);
    printf("Resta: %.2f\n", resta);
    printf("Multiplicación: %.2f\n", multiplicacion);

    return 0;
}
