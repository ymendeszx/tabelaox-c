#include <stdio.h>
#include <assert.h>
#include "function_tabela.c"

int main() {
    assert(validar_tabela_char('X') == 1);
    assert(validar_tabela_char('O') == 1);
    assert(validar_tabela_char('B') == 0);
    
    printf("Criado por Marcelo Mendes");
    return 0;
}