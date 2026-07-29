#include <stdio.h>
#include <assert.h>
#include "function_tabelaox.c"

int main() {
    assert(caractereValido('X') == 1);
    assert(caractereValido('O') == 1);
    assert(caractereValido('A') == 0);

    printf("Criado por: Marcelo Mendes");
    return 0;
}
