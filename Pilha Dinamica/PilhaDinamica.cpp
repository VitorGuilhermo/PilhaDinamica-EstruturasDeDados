#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio2.h>
#include <string.h>
#include <windows.h>
#include "TADPilhaDinamica.h"

int main(){
    TpPilhaDinamica *head;

    head = inicializa(head);

    head = insere(head, 'A');
    head = insere(head, 'B');
    head = insere(head, 'C');

    head = retira(head);
    head = retira(head);
    head = retira(head);

    exibe(head);
}
