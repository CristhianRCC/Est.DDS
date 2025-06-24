#include <stdio.h>
#include <string.h>
#include "interpret.h"
#include "lista.h"

struct list mem_vars;

int main() {
    char line[100];
    init_list(&mem_vars);

    printf("Interpretador iniciado. Digite comandos:\n");
    while (fgets(line, sizeof(line), stdin)) {
        line[strcspn(line, "\n")] = '\0';
        interpretar_comando(line);
    }
    liberar_lista(&mem_vars);
    return 0;
}
