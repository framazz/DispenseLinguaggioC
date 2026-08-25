/*
 * File: mainMonolitico.c
 * Esempio di programma monolitico per il test di primalità di un intero
 */

#include <stdio.h>

int main(void) {
    int numero;
    int divisore;
    int numeroDivisori = 0;

    do {
        printf("Inserisci un numero positivo: ");
        scanf("%d", &numero);
        while (getchar() != '\n');
    } while (numero <= 0);

    for (divisore = 1; divisore <= numero; divisore++) {
        if (numero % divisore == 0) {
            numeroDivisori++;
        }
    }

    if (numeroDivisori == 2) {
        printf("%d e' primo.\n", numero);
    } else {
        printf("%d non e' primo.\n", numero);
    }

    return 0;
}