#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

void init_list(struct list *l) {
    l->head = NULL;
}

void adicionar_ou_atualizar(struct list *l, const char *nome, int valor) {
    struct variavel *atual = l->head;
    while (atual) {
        if (strcmp(atual->nome, nome) == 0) {
            atual->valor = valor;
            return;
        }
        atual = atual->prox;
    }
    struct variavel *nova = malloc(sizeof(struct variavel));
    strcpy(nova->nome, nome);
    nova->valor = valor;
    nova->prox = l->head;
    l->head = nova;
}

int buscar_valor(struct list *l, const char *nome, int *valor) {
    struct variavel *atual = l->head;
    while (atual) {
        if (strcmp(atual->nome, nome) == 0) {
            *valor = atual->valor;
            return 1;
        }
        atual = atual->prox;
    }
    return 0;
}

void liberar_lista(struct list *l) {
    struct variavel *atual = l->head;
    while (atual) {
        struct variavel *temp = atual;
        atual = atual->prox;
        free(temp);
    }
}
