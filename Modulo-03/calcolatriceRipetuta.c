/*
 * File: calcolatriceRipetuta.c
 * Realizza una calcolatrice rudimentale in C. Chiedi due numeri interi per selezionare un operatore
 * aritmetico (+, -, *, /) ed eseguire l’operazione corrispondente. Permettere l’esecuzione ripetuta
 * tramite un menu di scelta.
 */

#include <stdio.h>
int main(void) {
    int op1, op2, risultato;
    char scelta; // Operazione da eseguire

    // Inizio il ciclo do-while che mostra il menu e poi esegue l'operazione richiesta
    do {
        printf("\nCalcolatrice");
        printf("\nImmettere il primo operando intero\t");
        scanf("%d", &op1);

        printf("\nImmettere il secondo operando intero\t");
        scanf("%d", &op2);

        printf("\nImmettere l'operazione da eseguire\t");
        scanf("%c", &scelta);
    } while (scelta != 'E' && scelta != 'e');

}