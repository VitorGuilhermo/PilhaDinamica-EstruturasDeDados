struct TpPilhaDinamica{
    char elemento;
    TpPilhaDinamica *prox;
};

TpPilhaDinamica *inicializa(TpPilhaDinamica *head){
    return head = NULL;
}

TpPilhaDinamica *novaCaixa(char elemento){
    TpPilhaDinamica *caixa = new TpPilhaDinamica;
    caixa->elemento = elemento;
    caixa->prox = NULL;
    return caixa;
}
TpPilhaDinamica *insere(TpPilhaDinamica *head, char elemento){
    TpPilhaDinamica *nc, *aux;

    nc = novaCaixa(elemento);
    if(head == NULL)
        head = nc;
    else{
        aux = head;
        while(aux->prox != NULL)
            aux = aux->prox;

        aux->prox = nc;
    }
    return head;
}

TpPilhaDinamica *retira(TpPilhaDinamica *head){
    TpPilhaDinamica *anterior, *atual;

    if (head->prox == NULL){
            atual = head;
            head = head->prox;
            delete(head);
    }
    else{
        atual = head;
        while(atual->prox != NULL){
            anterior = atual;
            atual = atual->prox;
        }
        anterior->prox = atual->prox;
        delete(atual);
    }

    return head;
}

void exibe(TpPilhaDinamica *head){
    TpPilhaDinamica *aux;

    aux = head;
    while(aux != NULL){
        printf("\t%c", aux->elemento);
        aux = aux->prox;
    }
}
