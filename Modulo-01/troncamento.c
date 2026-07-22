/*
 * File: troncamento.c
 * Mostra il troncamento a seguito del casting di un float a int
 */

#include <stdio.h>

int main(void) {
    float piGreco = 3.14159;
    int parteIntera;

    // Forziamo la conversione da float a int. I decimali andranno persi.
    parteIntera = (int) piGreco;

    printf("Valore intero: %d\n", parteIntera); // Stampa: 3
    return 0;
}