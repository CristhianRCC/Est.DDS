#include <stdio.h>
#include "interpret.h"

static void repl() {
    char line[1024];
    for (;;) {
        printf("> ");
        if (!fgets(line, sizeof(line), stdin)) {
            printf("\n");
            break;
        }
        interpretar_comando(line);
    }
}

int main() {
    repl();
    return 0;
}
