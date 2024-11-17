//Mila Gallegos 

#include <stdio.h>

int main() {
    float dolares, pesos;
    const float TASA_DE_CAMBIO = 11.96; // Definir la tasa de cambio constante

    // Solicitar la cantidad en dólares
    printf("Ingrese la cantidad en dólares: ");
    scanf("%f", &dolares);

    // Realizar la conversión a pesos
    pesos = dolares * TASA_DE_CAMBIO;

    // Imprimir el resultado
    printf("La cantidad equivalente en pesos es: %.2f\n", pesos);

    return 0;
}
