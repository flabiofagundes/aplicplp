#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;

    bool primo(int numero){
        int div = 0;
        int i;

        for (i = 1; i <= numero; i++)
            if (numero % i == 0)
                div++;

        if (div == 2)
            return true;
        else
            return false;
    }

    scanf("%d", &n);

    if (primo(n)){
        if (primo(n+2))
            printf("PRIMO CASADO!");
        else
            printf("PRIMO!");
    } else
        printf("NAO PRIMO!");

  return 0;
}
