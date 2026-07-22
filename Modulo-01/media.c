/*
 * File: media.c
 * Mostra l'uso del casting nella divisione fra variabili intere
 */
#include <stdio.h>

int main(void) {
    int somma = 17;
    int quanti = 5;
    float media;

    // Senza il cast, 17 / 5 darebbe 3 come risultato.
    // Convertendo "somma" in float, il C esegue una divisione con i decimali.
    media = (float) somma / quanti; 

    printf("Media esatta: %.2f\n", media); // Stampa: 3.40
    return 0;
}