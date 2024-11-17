//Mila Gallegos 

#include <stdio.h>

int main() {
    float capital, tasaInteres, montoFinal;

    // Solicitar los datos al usuario
    printf("Ingrese la cantidad de dinero invertida: ");
    scanf("%f", &capital);
    printf("Ingrese la tasa de interés mensual (en porcentaje): ");
    scanf("%f", &tasaInteres);

    // Calcular el monto final
    montoFinal = capital + (capital * tasaInteres / 100);

    // Imprimir el resultado
    printf("El monto total al finalizar el mes es: %.2f\n", montoFinal);

    return 0;
}
