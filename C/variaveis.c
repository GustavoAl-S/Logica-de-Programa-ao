int main()
{
    // Aprendendo a declarar variaveis
    int idade;
    double altura, salario;
    char nome[20]; 
    char genero;

    idade = 18;
    salario = 5800.6;
    altura = 1.65;
    genero = 'M';
    strcpy(nome, "Gustavo");

    printf("Idade = %d\n", idade);
    printf("Salario = %.2lf\n", salario);
    printf("Altura = %.2lf\n", altura);
    printf("Genero = %c\n", genero);
    printf("Nome = %s\n", nome);

    return 0;
}
