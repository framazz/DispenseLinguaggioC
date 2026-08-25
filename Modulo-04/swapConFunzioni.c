/*
 * File: swapConFunzioni.c
 * Funzione che scambia fra loro due valori
 */

#include <stdio.h>

void swapInt(int *primoValore, int *secondoValore);

int main(void) {
    int n1 = 7, n2 = 12;
    swapInt(&n1, &n2);
    printf("%d %d\n", n1, n2);
    
    return 0;
}

void swapInt(int *primoValore, int *secondoValore) {
    int temp = *primoValore;
    *primoValore = *secondoValore;
    *secondoValore = temp;
}