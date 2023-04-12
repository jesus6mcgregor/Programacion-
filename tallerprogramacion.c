#include <stdio.h>

int main() {
    int currentFloor = 0;
    int targetFloor;

    while(1) {
        printf("Elija una opción:\n");
        printf("a. Llamar ascensor\n");
        printf("b. Seleccionar piso\n");
        printf("c. Mostrar piso actual\n");
        printf("d. Salir\n");

        char option;
        scanf(" %c", &option);

        switch(option) {
            case 'a':
                printf("Ingrese el piso desde donde llama al ascensor: ");
                scanf("%d", &targetFloor);

                if(targetFloor == currentFloor) {
                    printf("El ascensor ya se encuentra en el piso %d.\n", currentFloor);
                }
                else {
                    printf("Ascensor en piso %d.\n", currentFloor);
                    while(currentFloor != targetFloor) {
                        if(currentFloor < targetFloor) {
                            currentFloor++;
                            printf("Ascensor en piso %d.\n", currentFloor);
                        }
                        else {
                            currentFloor--;
                            printf("Ascensor en piso %d.\n", currentFloor);
                        }
                    }
                }
                break;

            case 'b':
                printf("Ingrese el piso al que desea ir: ");
                scanf("%d", &targetFloor);

                if(targetFloor == currentFloor) {
                    printf("Ya se encuentra en el piso %d.\n", currentFloor);
                }
                else {
                    if(currentFloor < targetFloor) {
                        for(int i = currentFloor + 1; i <= targetFloor; i++) {
                            printf("Ascensor en piso %d.\n", i);
                        }
                        currentFloor = targetFloor;
                    }
                    else {
                        for(int i = currentFloor - 1; i >= targetFloor; i--) {
                            printf("Ascensor en piso %d.\n", i);
                        }
                        currentFloor = targetFloor;
                    }
                }
                break;

            case 'c':
                switch(currentFloor) {
                    case 0:
                        printf("Planta baja.\n");
                        break;
                    case 1:
                        printf("Primer piso.\n");
                        break;
                    case 2:
                        printf("Segundo piso.\n");
                        break;
                    case 3:
                        printf("Tercer piso.\n");
                        break;
                    case 4:
                        printf("cuarto piso.\n");
                        break;
                    case 5:
                        printf("Quinto piso.\n");
                        break;
                    case 6:
                        printf("sexto piso.\n");
                        break;
                    case 7:
                        printf("septimo piso.\n");
                        break;
                    case 8:
                        printf("octavo piso.\n");
                        break;
                    case 9:
                        printf("noveno piso.\n");
                        break;
                    default:
                        printf("%d° piso.\n", currentFloor);
                        break;
                }
                break;

            case 'd':
                return 0;

            default:
                printf("Opción inválida. Intente de nuevo.\n");
                break;
        }
    }

    return 0;
}
