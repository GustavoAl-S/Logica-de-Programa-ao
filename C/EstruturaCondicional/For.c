#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (size_t i = 0; i <= numero; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
