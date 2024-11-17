//Mila Gallegos 

#include <stdio.h>

int main() {
    float distancia, precioPorKm = 0.23, precioTotal;
    int diasEstancia;

    // Solicitar la distancia de ida y el tiempo de estancia
    printf("Ingrese la distancia de ida (en km): ");
    scanf("%f", &distancia);
    printf("Ingrese el tiempo de estancia (en días): ");
    scanf("%d", &diasEstancia);

    // Calcular el precio total sin descuento
    float distanciaTotal = distancia * 2;
    precioTotal = distanciaTotal * precioPorKm;

    // Aplicar el descuento del 30% si aplica
    if (diasEstancia > 7 && distanciaTotal > 800) {
        precioTotal *= 0.7;  // Aplicar 30% de descuento
    }

    // Imprimir el precio total del ticket
    printf("El precio del ticket ida y vuelta es: %.2f\n", precioTotal);

    return 0;
}
