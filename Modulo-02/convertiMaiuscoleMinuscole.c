/*
 * File: convertiMaiuscoleMinuscole.c
 * Converte una lettera maiuscola nella corrispondente minuscola e viceversa
 */

#include <stdio.h>
#define DIST_MAIU_MINU ('a' - 'A') // Distanza fra le lettere minuscole e le maiuscole

int main(void) {
    char maiuscola = 'A';
    char minuscola = maiuscola + DIST_MAIU_MINU;  // 'a'

    printf("Data la lettera maiuscola %c, la sua minuscola e': %c\n", maiuscola, minuscola);
    char minuscola2 = 'z';
    char maiuscola2 = minuscola2 - DIST_MAIU_MINU; // 'Z'
    printf("Data la lettera minuscola %c, la sua maiuscola e': %c\n", minuscola2, maiuscola2);

    return 0;
}