#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temperatura = 1;
    int temp_negativa = 0;

    while (temperatura != 0){
        scanf("%d", &temperatura);

        if (temperatura < 0)
            temp_negativa++;
    }

    printf("%d", temp_negativa);

}
