#include <stdio.h>
#include "function_tabelaox.c"

int main(int argc, char *argv[]) 
{
    char tabela[3][3] = {0};
    int por_parametro = 0;

    if (argc > 1) 
    {
        int resultado = processar(argc, argv, tabela);
        if (resultado == -1) 
        {
            printf("caractere invalido\n");
            return 0;
        } else if (resultado == 1) 
        {
            por_parametro = 1;
        }
    }

    if (!por_parametro) 
    {
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                int valido = 0;

                while (!valido) 
                {
                    printf("Digite o caractere da linha %d coluna %d: ", i + 1, j + 1);
                    scanf(" %c", &tabela[i][j]);

                    if (caractereValido(tabela[i][j])) 
                    {
                        valido = 1;
                    } else 
                    {
                        printf("caractere invalido\n");
                    }
                }
            }
        }
    }

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("Linha %d Coluna %d: %c\n", i + 1, j + 1, tabela[i][j]);
        }
    }

    printf("Criado por: Marcelo Mendes");
    return 0;
}
