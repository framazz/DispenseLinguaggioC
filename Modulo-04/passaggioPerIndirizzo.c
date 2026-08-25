/*
 * File: passaggioPerIndirizzo.c
 * Incremento di una variabile passata per indirizzo
 */

#include <stdio.h>

void incrementa(int *numero);

int main(void) {
    int valore = 5;
    incrementa(&valore);
    printf("%d\n", valore);

    return 0;
}

void incrementa(int *numero) {
    (*numero)++;
}