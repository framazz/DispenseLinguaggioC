/*
 * File: pari.c
 * Verificare se un numero inserito dall'utente è pari o dispari
 */
#include <stdio.h>

int main(void) {
    int numero;

    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    // L'operatore modulo % calcola il resto della divisione intera per 2
    if (numero % 2 == 0) {
        printf("Il numero %d e' PARI.\n", numero);
    } else {
        printf("Il numero %d e' DISPARI.\n", numero);
    }

    return 0;
}