#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "interpret.h"
#include "stack.h"
Stack *s = NULL;

void interpreter_init(){
    s = new_stack(100);
}

void interpret (const char *source) {
    char op[10];
    char arg[10];

    sscanf (source, "%s%s", op, arg);
    printf("operaÃ§Ã£o: %s\n", op);
    printf("argumento: %s\n",  arg);
    if(strcmp(op, "push")==0){
        int value = atoi(arg);
        stack_push(s, value);
    }
    else if(strcmp(op, "add")==0){
        add(s);
    }else if(strcmp(op, "sub")==0){
        sub(s);
    }else if(strcmp(op, "div")==0){
        div(s);
    }else if(strcmp(op, "print")==0){
        stack_print(s);
    }
}