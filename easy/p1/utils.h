#define META 20
#define MINA 10

int rollDice();
void dibujar_cara(int n);
void animacionDado(int resultado);
void dibujar_barda();
void dibujar_carril(int casilla, char jugador);
void dibujar_pista(int casillaJ1, int casillaJ2, char jugador1, char jugador2);
void dibujar_explosion(int cuadro);
void mostrar_cuadro(int cuadro, int espera);
void letrero_mina(char jugador);
void animar_explosion(char jugador);
void mostrar_victoria();
void mostrar_derrota();
void mostrar_empate();
