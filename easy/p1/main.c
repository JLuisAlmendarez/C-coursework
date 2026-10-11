#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"

int main(void) {

    srand(time(NULL));

    char tecla;
    int condicionVictoria = 0;
    int carreraHumano = 0;
    int carreraMaquina = 0;

    printf("Bienvenido a CaballoTron el nuevo de caballos en ENCOM©\n");
    printf("CaballoTron es un juego de caballos en los que compites contra la maquina.\n");
    printf("Instrucciones: \n");
    printf("1. Presiona Enter para tirar el dado\n");
    printf("2. El primero en recorrer los 20 metros llega a la Meta y Gana\n");
    printf("3. Si el caballo cae en la casilla 10 (hay una mina) se reinicia su carril y regresa al inicio.\n");
    printf("Presiona SOLO Enter si quiere jugar. Presione cualquier otra tecla y Enter si quiere salir.\n");

    tecla = getchar();

    if (tecla == '\n') {
        printf("Iniciando juego...\n");

        while (condicionVictoria < 1) {
    
            printf("\nTu turno. Presiona Enter para tirar el dado...\n");
            getchar();
            int resultadoTurnoJugador = rollDice();
            animacionDado(resultadoTurnoJugador);
            carreraHumano += resultadoTurnoJugador;
            printf("Resultado del dado: %d\n", resultadoTurnoJugador);
            printf("Tu puntaje: %d\n", carreraHumano);
            if (carreraHumano == MINA) {
                animar_explosion('J');
                carreraHumano = 0;
            }

            printf("\nTurno del oponente\n");
            int resultadoTurnoMaquina = rollDice();
            animacionDado(resultadoTurnoMaquina);
            carreraMaquina += resultadoTurnoMaquina;
            printf("Resultado del dado: %d\n", resultadoTurnoMaquina);
            printf("Puntaje del oponente: %d\n", carreraMaquina);
            if (carreraMaquina == MINA) {
                animar_explosion('O');
                carreraMaquina = 0;
            }
            dibujar_pista(carreraHumano, carreraMaquina, 'J', 'O');

            if (carreraHumano >= META || carreraMaquina >= META) {
                condicionVictoria++;
            }
        }

        if (carreraHumano >= META && carreraMaquina >= META) {
            mostrar_empate();
        } else if (carreraHumano >= META) {
            mostrar_victoria();
        } else if (carreraMaquina >= META) {
            mostrar_derrota();
        }

    } else {
        printf("Juego Cerrado.\n");
    }

    return 0;
}
