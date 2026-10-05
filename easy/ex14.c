#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
enum equiposEnum {CHIVAS, ATLAS, AMERICA, SANTOS, TOLUCA, CRUZ_AZUL};

void imprimirEquipo(enum equiposEnum equipo_a_imprimir){
    switch (equipo_a_imprimir) {
        case CHIVAS:
            printf("Te toco chivas");
            break;
        case ATLAS:
            printf("Te toco atlas");
            break;
        case AMERICA:
            printf("Te toco america");
            break;
        case SANTOS:
            printf("Te toco santos");
            break;
        case TOLUCA:
            printf("Te toco toluca");
            break;
        case CRUZ_AZUL:
            printf("Te toco cruz azul");
            break;
        default:
            break;
    }

}


int main(void){

    srand(time(NULL));

    enum equiposEnum equipo_que_te_toca = rand() % 6;
    enum equiposEnum equipo_secundario = rand() % 6;
    while (equipo_que_te_toca == equipo_secundario) {
        enum equiposEnum equipo_secundario = rand() % 6;
    
    }
    printf("Esta es tu quiniela: \n");
    printf("tu primer equipo es:");
    imprimirEquipo(equipo_que_te_toca);
    printf("\ntu segundo equipo es:");
    imprimirEquipo(equipo_secundario);

}*/

/*
int main (void) {// no declarar antes en un ciclo for
    for (int num1 = 1;num1<11;num1++) {
        for (int num2 = 1;num2<11;num2++) {
            int num3 = num1*num2;
            printf("%d x %d = %d\n", num1, num2, num3);
        }
    }
}
*/

enum herramienta {PIEDRA, PAPEL, TIJERA};
char* nombres_herramientas[] = {"Piedra","Papel","Tijera"};

int main(void){

    int puntaje_maquina = 0;
    int puntaje_jugador = 0;
    int condicion = 0;

    while (condicion < 1) {
        
            enum herramienta eleccion_jugador;
            printf("Eleccion: ");
            scanf("%d", &eleccion_jugador);
    
            srand(time(NULL));
            enum herramienta eleccion_maquina = rand() % 3;

            printf("Jugador: %s, Maquina: %s\n", nombres_herramientas[eleccion_jugador], nombres_herramientas[eleccion_maquina]);

            int caso;

            if (eleccion_jugador == eleccion_maquina) {
                caso = 0;
            } else if (eleccion_jugador == PIEDRA && eleccion_maquina == PAPEL) {
                caso = 1;
            } else if (eleccion_jugador == PIEDRA && eleccion_maquina == TIJERA) {
                caso = 2;
            } else if (eleccion_jugador == PAPEL && eleccion_maquina == PIEDRA) {
                caso = 3;
            } else if (eleccion_jugador == PAPEL && eleccion_maquina == TIJERA) {
                caso = 4;
            } else if (eleccion_jugador == TIJERA && eleccion_maquina == PIEDRA) {
                caso = 5;
            } else if (eleccion_jugador == TIJERA && eleccion_maquina == PAPEL) {
                caso = 6;
            }
    

            switch (caso) {// agregar un dos de tres (cnt)
                case 0:
                    printf("=\n");
                    break;
                case 1:
                    printf("x\n");
                    puntaje_maquina++;
                    break;
                case 2: 
                    printf("o\n");
                    puntaje_jugador++;
                    break;
                case 3:
                    printf("o\n");
                    puntaje_jugador++;
                    break;
                case 4:
                    printf("x\n");
                    puntaje_maquina++;
                    break;
                case 5:
                    printf("x\n");
                    puntaje_maquina++;
                    break;
                case 6: 
                    printf("o\n");
                    puntaje_jugador++;
                    break;
            }

        if (puntaje_jugador == 3 || puntaje_maquina == 3) {
            condicion++;
        }

    }
    
    if (puntaje_jugador == 3) {
        printf("Ganaste el juego.");
    } else if (puntaje_maquina==3) {
        printf("Perdiste el juego.");
    }


}
