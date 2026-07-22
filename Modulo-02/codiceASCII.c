/*
 * File: codiceASCII.c
 * Mostrare il codice numerico associato a un carattere
 */

#include <stdio.h>

int main(void) {
    char lettera = 'A';
    printf("Il carattere e': %c\n", lettera);   // Stampa: A
    printf("Il suo codice ASCII e': %d\n", lettera); // Stampa: 65

    return 0;
}