/*
 * File: promotion.c
 * Dimostrazione della type promotion
 */

#include <stdio.h>

int main(void) {
    int a = 10;
    float b = 3.5f, risultato;

    risultato = a + b; // a viene convertito implicitamente in float
    b = a; // Il compilatore converte automaticamente l'int in float

    printf("Valore float: %f\n", b); // Stampa: 10.000000
    return 0;
}