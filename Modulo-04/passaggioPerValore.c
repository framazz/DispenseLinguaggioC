/*
 * Viene mostrato il passaggio per valore dei parametri
 * La modifica al parametro numero non influisce sulla variabile valore del main
 */

#include <stdio.h>

void incrementa(int numero);

int main(void) {
    int valore = 5;
    incrementa(valore);
    printf("%d\n", valore);
    return 0;
}

void incrementa(int numero) {
    numero++;
}