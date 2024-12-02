#include <stdio.h>
#include <string.h>

int main()
{
    int numero, soma;

    soma = 0;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero);

    // Usuario vai digitar um numero que é adicionado a soma até que ele digite 0
    while (numero != 0)
    {
        soma = soma + numero;
        printf("Digite outro numero: ");
        scanf("%d", &numero);

    }
    printf("Resultado da soma = %d\n", soma);
    return 0;
}
