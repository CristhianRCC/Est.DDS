#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "interpret.h"
#include "stack.h"
#include "lista.h"

extern struct list mem_vars;

void interpretar_comando(const char *source) {
    char op[10];
    char arg[20];
    int x, y;

    sscanf(source, "%s%s", op, arg);

    if (strcmp(op, "push") == 0) {
        int valor;
        if (sscanf(arg, "%d", &valor) == 1) {
            push(valor);
        } else {
            if (buscar_valor(&mem_vars, arg, &valor)) {
                push(valor);
            } else {
                printf("Variável '%s' não encontrada.\n", arg);
            }
        }
    }

    else if (strcmp(op, "pop") == 0) {
        if (is_empty()) {
            printf("Erro: pilha vazia.\n");
            return;
        }
        int valor = pop();
        adicionar_ou_atualizar(&mem_vars, arg, valor);
    }

    else if (strcmp(op, "add") == 0) {
        if (size() < 2) {
            printf("Erro: poucos elementos na pilha.\n");
            return;
        }
        x = pop();
        y = pop();
        push(x + y);
    }

    else if (strcmp(op, "sub") == 0) {
        if (size() < 2) {
            printf("Erro: poucos elementos na pilha.\n");
            return;
        }
        x = pop();
        y = pop();
        push(x - y);
    }

    else if (strcmp(op, "mul") == 0) {
        if (size() < 2) {
            printf("Erro: poucos elementos na pilha.\n");
            return;
        }
        x = pop();
        y = pop();
        push(x * y);
    }

    else if (strcmp(op, "div") == 0) {
        if (size() < 2) {
            printf("Erro: poucos elementos na pilha.\n");
            return;
        }
        x = pop();
        y = pop();
        if (y == 0) {
            printf("Erro: divisão por zero.\n");
            return;
        }
        push(x / y);
    }

    else if (strcmp(op, "print") == 0) {
        if (is_empty()) {
            printf("Erro: pilha vazia.\n");
        } else {
            printf("%d\n", pop());
        }
    }

    else {
        printf("Comando '%s' não reconhecido.\n", op);
    }
}
