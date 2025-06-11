#include "stack.h"

#include <stdlib.h>
#include <stdio.h>

struct stack {
    int top;
    int *values;
};

Stack* new_stack(int size){
    Stack *s = calloc(1,sizeof(Stack));
    s->values = calloc(size,sizeof(int));
    s->top = 0;
    return s;
}

void stack_push(Stack* s, int value){
    s->values[s->top++] = value;
    //stack_print(s);
}

int stack_pop (Stack* s){
    return s->values[--s->top];
}
void stack_print(Stack* s){
    printf("--Stack-------------------\n");
    for(int i=0;i<s->top;i++){
        printf("%d\n",s->values[i]);
    }
    printf("--Stack-------------------\n");
}
void add(Stack* s){
    if(s->top>1){
                int arg1 = stack_pop(s);
                int arg2 = stack_pop(s);
                stack_push(s, arg1+arg2);
    }else{
         printf("Deve haver pelo menos dois numeros empilhados para realizar esta operacao!\n");
    }
}
void sub(Stack* s){
    if(s->top>1){
                int arg1 = stack_pop(s);
                int arg2 = stack_pop(s);
                stack_push(s, arg1-arg2);
    }else{
         printf("Deve haver pelo menos dois numeros empilhados para realizar esta operacao!\n");
    }
}

void div(Stack* s){
    if(s->top>1){
        if(s->values[(s->top)-2]!=0){
                int arg1 = stack_pop(s);
                int arg2 = stack_pop(s);
                stack_push(s, arg2/arg1);
        }else{
            printf("O valor do denominador deve ser diferente de zero!\n");
        }
    } else{
         printf("Deve haver pelo menos dois numeros empilhados para realizar esta operacao!\n");
    }
}