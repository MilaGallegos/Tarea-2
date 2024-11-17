//Mila Gallegos 

#include <stdio.h>
#define PI 3.14159265359  // Definición de la constante PI

int main() {
    float radio, area, circunferencia;

    // Solicitar el radio al usuario
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);

    // Calcular el área y la circunferencia
    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;

    // Imprimir los resultados
    printf("\nResultados:\n");
    printf("Área del círculo: %.2f\n", area);
    printf("Circunferencia del círculo: %.2f\n", circunferencia);

    return 0;
}
