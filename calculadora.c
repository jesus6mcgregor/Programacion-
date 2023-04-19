#include <stdio.h>

// Calculadora: suma, resta, multiplicacion, division

void sumar(int sumando1, int sumando2) {
    int suma;
    suma = sumando1 + sumando2;
    printf("La suma es %d\n", suma);
}
void resta(int restado1, int restado2) {
    int diferencia;
    diferencia = restado1 - restado2;
    printf("La resta es %d\n", diferencia);
}
void multiplicacion(int producto1, int producto2) {
    int producto;
    producto = producto1 * producto2;
    printf("La multiplicacion es %d\n", producto);
}
void division(int dividendo, int divisor) {
    if (divisor == 0) {
        printf("Error: no se puede dividir entre cero\n");
        return;
    }
    float cociente = (float)dividendo / divisor;
    printf("La division es %.2f\n", cociente);
}
int main() {
    int num1, num2;
    printf("Ingrese num1: ");
    scanf("%d", &num1);
    printf("Ingrese num2: ");
    scanf("%d", &num2);
    sumar(num1, num2);
    resta(num1, num2);
    multiplicacion(num1, num2);
    division(num1, num2);
int main {
        int Imprimirresultados;
    //Imprimir, recibir 4 parametros, printf
    Imprimirresultados(sumar, resta, multiplicacion, division);
    //Imprimirresultados(sumar(num1, num2), resta(num1, num2), multiplicacion(num1, num2), division(num1, num2))
    return 0;
}
}
