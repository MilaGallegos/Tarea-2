//Mila Gallegos 

#include <stdio.h>

int main() {
    float montoCompra, montoPagar;

    // Solicitar el monto de la compra al cliente
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &montoCompra);

    // Calcular el monto a pagar con o sin descuento
    if (montoCompra > 2500) {
        montoPagar = montoCompra * 0.92;  // Aplicar 8% de descuento
    } else {
        montoPagar = montoCompra;  // Sin descuento
    }

    // Imprimir el monto a pagar
    printf("El monto total a pagar es: %.2f\n", montoPagar);

    return 0;
}
