/*
 * File: leggoBoolConChar.c
 * Leggere una variabile di tipo bool tramite un char
 */
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool superato;
    char valore;

    printf("Hai superato l'esame? [s oppure S per si', altro per no']\n");
    scanf(" %c", &valore);
    superato = (valore == 'S' || valore == 's') ? true : false;
    printf("Superato: %s\n", superato ? "Si" : "No");    // Stampa Si, no in base al valore

    return 0;
}