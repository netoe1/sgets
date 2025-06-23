# sgets():Implementation of sgets() for strings

## 📌 O que é

`sgets` é uma função auxiliar em C desenvolvida para ler strings da entrada padrão (`stdin`) de forma **segura**, substituindo o uso obsoleto de `gets()`.

Ela encapsula `fgets()` com melhorias:

- Remove automaticamente o caractere de nova linha (`\n`).
- Evita estouro de buffer (buffer overflow).
- É simples de usar.

---

## ✅ Assinatura da função

```c
void sgets(char *s, size_t size);
```

## 💥 Problemas que resolve

- `gets()` é inseguro: permite que o usuário escreva além do limite do buffer, causando vulnerabilidades.
- `fgets()` mantém o `\n`, o que geralmente precisa ser removido manualmente.
- Evita erros comuns como:

```c
sizeof(s)  // errado, pois retorna o tamanho do ponteiro, não do buffer
```

# Exemplo de uso

```c
#include "sgets.h"
int main(void){
    char nome[10]; // Espaço de memória para nome;
    sgets(nome,9); // Recebe o nome e guarda 10 caracteres em nome.
    puts(nome); // Mostra o nome da pessoa
}
```
