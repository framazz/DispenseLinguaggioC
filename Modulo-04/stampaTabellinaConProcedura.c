/*
 * File: stampaTabellinaConProcedura.c
 * Stampa la tabellina di un numero intero tramite l’uso di una procedura
 */

#include <stdio.h>

void stampaTabellina(int numero);

int main(void) {
    int numero;
    printf("Numero: ");
    scanf("%d", &numero);
    while (getchar() != '\n');
    stampaTabellina(numero);

    return 0;
}

void stampaTabellina(int numero) {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}