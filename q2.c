#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int posicoes[4];
    char palavras[4][20];
    char senha[4];

    for(i=0; i<4; i++)
        scanf("%d", &posicoes[i]);

    for(i=0; i<4; i++)
        scanf("%s", palavras[i]);

    for(i=0; i<4; i++)
        senha[i] = palavras[i][posicoes[i]];

    printf("%s", senha);

    return 0;
}
