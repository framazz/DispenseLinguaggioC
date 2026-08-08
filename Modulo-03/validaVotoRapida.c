/*
 * File: validaVotoRapida.c
 * Validazione di un voto su scala decimale versione rapida
 */

#include <stdio.h>

int main (void) {
    int voto;

    do {
        printf("Inserisci un voto tra 1 e 10: \t");
        scanf("%d", &voto);
        while (getchar() != '\n'); // Pulizia del buffer

    } while (voto < 1 || voto > 10);

    printf("\nIl voto inserito e': %d", voto);

    return 0;
}