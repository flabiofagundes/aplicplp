#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temperatura;
    int temp_negativa = 0;

    do {
        scanf("%d", &temperatura);

        if (temperatura < 0)
            temp_negativa++;
    } while (temperatura != 0);

    printf("%d", temp_negativa);

    return 0;
}
