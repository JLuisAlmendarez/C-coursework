#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "utils.h"


int rollDice(){
    int d6 = rand()%6+1;
    return d6;
}

void dibujar_cara(int n) {
    printf("+-------+\n");
    switch (n) {
        case 1:
            printf("|       |\n");
            printf("|   o   |\n");
            printf("|       |\n");
            break;
        case 2:
            printf("| o     |\n");
            printf("|       |\n");
            printf("|     o |\n");
            break;
        case 3:
            printf("| o     |\n");
            printf("|   o   |\n");
            printf("|     o |\n");
            break;
        case 4:
            printf("| o   o |\n");
            printf("|       |\n");
            printf("| o   o |\n");
            break;
        case 5:
            printf("| o   o |\n");
            printf("|   o   |\n");
            printf("| o   o |\n");
            break;
        case 6:
            printf("| o   o |\n");
            printf("| o   o |\n");
            printf("| o   o |\n");
            break;
    }
    printf("+-------+\n");
}

void animacionDado(int resultado){
    for (int i = 0; i < 12 ; i++) {
        dibujar_cara(rand()%6+1);
        fflush(stdout);
        usleep(50000+i*15000);
        printf("\033[5A");
    }
    dibujar_cara(resultado);
}

void dibujar_barda(){
    printf("    ");
    for (int i = 0;i <= META;i++) {
        if (i == META) {
            printf("|");
        }
        else if (i % 5 == 0 && i!=0) {
            printf("%d ", i % MINA);
        }
        else if (i != 0) {
            printf("_ ");
        } else {
            printf("  ");
        }
    }
    printf("\n");
}

void dibujar_carril(int casilla, char jugador){
    if (casilla > META) {
        casilla = META;
    }

    if (jugador == 'J') {
        printf("J1 ");
    } else {
        printf("J2 ");
    }

    for (int i = 0; i <= META; i++) {
        if (i == MINA && casilla == 10) {
            printf("x ");
        } else if (i == casilla) {
            printf(" | ");
        } else if (i == 10) {
            printf("* ");
        } else {
            printf("  ");
        }
    }
    printf("\n");
}

void dibujar_pista(int casillaJ1, int casillaJ2, char jugador1, char jugador2){
    dibujar_barda();
    dibujar_carril(casillaJ1, jugador1);
    dibujar_carril(casillaJ2, jugador2);
    dibujar_barda();

}

void dibujar_explosion(int cuadro) {
    switch (cuadro) {
        case 1:
            printf("               \n");
            printf("               \n");
            printf("       *       \n");
            printf("               \n");
            printf("               \n");
            break;
        case 2:
            printf("               \n");
            printf("      \\|/      \n");
            printf("     --*--     \n");
            printf("      /|\\      \n");
            printf("               \n");
            break;
        case 3:
            printf("    .  |  .    \n");
            printf("   *  \\|/  *   \n");
            printf("---- BOOM! ----\n");
            printf("   *  /|\\  *   \n");
            printf("    '  |  '    \n");
            break;
        case 4:
            printf("  .    .    .  \n");
            printf("    ( ~~~ )    \n");
            printf("  ~(  ~~~  )~  \n");
            printf("    ( ~~~ )    \n");
            printf("  .    .    .  \n");
            break;
    }
}

void mostrar_cuadro(int cuadro, int espera) {
    dibujar_explosion(cuadro);
    fflush(stdout);
    usleep(espera);
    printf("\033[5A");
}

void letrero_mina(char jugador) {
    printf("\n");
    printf("+=================================+\n");
    printf("|          !!! MINA !!!           |\n");
    printf("|                                 |\n");
    if (jugador == 'J') {
        printf("|   Caiste en la casilla 10.      |\n");
        printf("|   Se reinicia tu carril.        |\n");
    } else {
        printf("|   El oponente cayo en la 10.    |\n");
        printf("|   Se reinicia su carril.        |\n");
    }
    printf("+=================================+\n");
}

void animar_explosion(char jugador) {
    mostrar_cuadro(1, 150000);
    mostrar_cuadro(2, 150000);
    mostrar_cuadro(3, 200000);
    mostrar_cuadro(2, 100000);
    mostrar_cuadro(3, 300000);
    dibujar_explosion(4);
    letrero_mina(jugador);
}

void mostrar_victoria() {
    printf("\n");
    printf("+=================================+\n");
    printf("|                                 |\n");
    printf("|     *  *  G A N A S T E  *  *   |\n");
    printf("|                                 |\n");
    printf("+=================================+\n");
}

void mostrar_derrota() {
    printf("\n");
    printf("+=================================+\n");
    printf("|                                 |\n");
    printf("|        P E R D I S T E          |\n");
    printf("|                                 |\n");
    printf("+=================================+\n");
}

void mostrar_empate() {
    printf("\n");
    printf("+=================================+\n");
    printf("|                                 |\n");
    printf("|          E M P A T E            |\n");
    printf("|                                 |\n");
    printf("+=================================+\n");
}


