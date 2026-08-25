/*
 * File: massimoConFunzioni.c
 * Trova il massimo fra due interi con una funzione
 */

#include <stdio.h>

int trovaMassimo(int primoNumero, int secondoNumero);

int main(void) {
    int primoNumero, secondoNumero, massimo;

    printf("Inserisci due numeri: ");
    scanf("%d", &primoNumero);
    while (getchar() != '\n');

    scanf("%d", &secondoNumero);
    while (getchar() != '\n');

    massimo = trovaMassimo(primoNumero, secondoNumero);
    printf("Massimo: %d\n", massimo);

    return 0;
}

int trovaMassimo(int primoNumero, int secondoNumero) {
    int massimo;
    if (primoNumero > secondoNumero) {
        massimo = primoNumero;
    } else {
        massimo = secondoNumero;
    }
    
    return massimo;
}