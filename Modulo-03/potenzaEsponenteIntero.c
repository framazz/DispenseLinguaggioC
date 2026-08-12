/*
 * File: potenzaEsponenteIntero.c
 * Data una base intera non nulla, viene calcolata la potenza di esponente exp
 * della base immessa. L'esponente è un intero qualsiasi
 */

#include <stdio.h>
#include <stdlib.h> // Per la funzione abs (valore assoluto)

int main() {
    int base, exp, i;
    float ris = 1; // Risultato inizializzato a 1 perché è un moltiplicatore

    // Chiedo la base NON nulla
    do {
        printf("Immettere la base (intera, non nulla):  ");
        scanf("%d", &base);
        while (getchar() != '\n');
    } while (base == 0);

    printf("Immettere l'esponente:  ");
    scanf("%d", &exp);
    while (getchar() != '\n');

    // abs(x) restituisce il valore assoluto di x
    for (i = 1; i <= abs(exp); i++) {
        ris *= base;
    }

    if (exp < 0) {
        ris = 1 / ris;
    }

    printf("%d^(%d) vale %.3f", base, exp, ris);

    return 0;
}