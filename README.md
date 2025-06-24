# 🧠 Projeto PILHAS ESTATICAS REPL – Parte 1 (GRUPO 01)

## 📌 Descrição

Este repositório contém a primeira parte do desenvolvimento de um interpretador simples (REPL – Read-Eval-Print Loop) em linguagem C. O objetivo é criar uma base funcional com entrada interativa, manipulação de dados via pilha, e um interpretador de comandos básicos.

## 🗂️ Estrutura do Projeto

- `main.c`: Contém a função principal e o loop do REPL.
- `interpret.c` / `interpret.h`: Implementa a lógica de interpretação e execução de comandos.
- `stack.c` / `stack.h`: Define e implementa uma pilha (stack) com operações fundamentais (`push`, `pop`, etc.).


## ✅ Funcionalidades Implementadas

- Loop de leitura e execução contínua de comandos.
- Estrutura de pilha com alocação dinâmica.
- Interpretação de comandos básicos definidos pelo usuário.
- Modularização do código com separação de responsabilidades.

## 📚 Requisitos

- Sistema com suporte a terminal (Linux, macOS ou Windows com WSL).
- Compilador C (preferencialmente `gcc`).

## 🧪 Testes

Você pode testar o REPL digitando comandos diretamente no terminal após a execução. Exemplos de comandos disponíveis devem estar definidos em `interpret.c`.

## 📝 Observações

- Este é apenas o início do projeto. Futuras partes incluirão mais funcionalidades como suporte a variáveis, controle de fluxo e avaliação de expressões matemáticas.
- Código modularizado visando fácil expansão.

## 👨‍💻 Autores

- [ARTHUR RODRIGUES CAMPOS/
CRISTHIAN RENAN CAMPOS COSTA/
FABIO CARVALHO EVERTON/
GABRIEL PEREIRA SODRE]
- Trabalho acadêmico – [ALGORITMO E ESTRUTURA DE DADOS]


---

🧠 **Projeto PILHAS ESTATICAS REPL – Parte 2 (GRUPO 01)**

## 📌 Descrição

Este repositório contém a segunda parte do desenvolvimento de um interpretador simples (REPL – Read-Eval-Print Loop) em linguagem C.

Nesta etapa, o projeto evoluiu para incluir **suporte a variáveis**, permitindo armazenar valores e recuperá-los posteriormente durante a execução dos comandos.
## 🗂️ Estrutura do Projeto

- `main.c`: Contém a função principal e o loop do REPL.
- `interpret.c` / `interpret.h`: Implementa a lógica de interpretação e execução de comandos, incluindo o suporte a variáveis.
- `stack.c` / `stack.h`: Define e implementa a pilha (stack) com operações fundamentais (`push`, `pop`, etc.). **(Não alterados nesta etapa)**

## ✅ Funcionalidades Implementadas

### Funcionalidades da Etapa 1:

- Loop de leitura e execução contínua de comandos.
- Estrutura de pilha com alocação dinâmica.
- Interpretação de comandos básicos:
  - `push <valor>`
  - `add`
  - `sub`
  - `mul`
  - `div`
  - `print`
- Modularização do código com separação de responsabilidades.

### Novas Funcionalidades da Etapa 2:

- **Suporte a Variáveis**
  - **store `<nome>`**: Armazena o valor no topo da pilha em uma variável.
  - **load `<nome>`**: Recupera o valor da variável e empilha novamente.

## ⚙️ Instruções para Compilar e Executar

### Compilar:

```bash
gcc main.c interpret.c stack.c -o interpretador

