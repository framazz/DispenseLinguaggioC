/*
 * File: potenzaEsponenteIntero.c
 * Data una base intera, viene calcolata la potenza di esponente exp
 * della base immessa. L'esponente è un intero qualsiasi
 */

#include <stdio.h>
#include <stdlib.h> // Per la funzione abs (valore assoluto)
#include <stdbool.h>

int main(void) {
    int base, exp, i;
    double ris = 1; // Risultato inizializzato a 1 perché è un moltiplicatore
    bool ok; // Flag per evitare le potenze non calcolabili

    // Chiedo la base
    printf("Immettere la base (intera): \t");
    scanf("%d", &base);
    while (getchar() != '\n');

    // Chiedo l'esponente evitando base ed esponente contemporaneamente nulli
    do {
        ok = true; // Suppongo che base ed esponente non siano nulli
        printf("\nImmettere l'esponente (intero): \t");
        scanf("%d", &exp);
        while (getchar() != '\n');
        if (base == 0) {
            if (exp == 0) {
                ok = false;
                printf("\nLa base e l'esponente non possono essere nulli");
            } else if (exp < 0) {
                ok = false;
                printf("\nL'esponente non puo' essere negativo con base nulla");
            }
        }
    } while (!ok);

    // abs(x) restituisce il valore assoluto di x
    for (i = 1; i <= abs(exp); i++) {
        ris *= base;
    }

    if (exp < 0) {
        ris = 1 / ris;
    }

    printf("\n%d^(%d) vale %.3f", base, exp, ris);

    return 0;
}