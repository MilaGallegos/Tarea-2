//Mila Gallegos 

#include <stdio.h>

int main() {
    float sueldo, sueldoAumentado;

    // Solicitar el sueldo del trabajador
    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);

    // Calcular el sueldo con el aumento correspondiente
    if (sueldo < 1000) {
        sueldoAumentado = sueldo * 1.15;  // Aumento del 15%
    } else {
        sueldoAumentado = sueldo * 1.12;  // Aumento del 12%
    }

    // Imprimir el sueldo con aumento
    printf("El sueldo con el aumento es: %.2f\n", sueldoAumentado);

    return 0;
}

