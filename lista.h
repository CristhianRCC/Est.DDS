#ifndef LISTA_H
#define LISTA_H

struct variavel {
    char nome[20];
    int valor;
    struct variavel *prox;
};

struct list {
    struct variavel *head;
};

void init_list(struct list *l);
void adicionar_ou_atualizar(struct list *l, const char *nome, int valor);
int buscar_valor(struct list *l, const char *nome, int *valor);
void liberar_lista(struct list *l);

#endif
