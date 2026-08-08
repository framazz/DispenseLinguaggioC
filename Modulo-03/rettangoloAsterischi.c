/*
 * File: rettangoloAsterischi.c
 * Stampare una griglia di R righe e C colonne con asterischi
 */
#include <stdio.h>

#define R 4 // Numero di righe
#define C 6 // Numero di colonne

int main(void) {
    int i, j; // Indici per le righe e le colonne

    for (i = 0; i < R; i++) {       // Ciclo esterno (righe)
        for (j = 0; j < C; j++) { // Ciclo interno (colonne)
            printf("* ");
        }
        printf("\n"); // A capo dopo ogni riga completa
    }

    return 0;
}