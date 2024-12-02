// Aprendendo sobre placeholders
int main()
{
    int idade;
    char nome[50];
    char sexo;
    double salario;

    idade = 18;
    strcpy (nome, "Alanzoka");
    sexo = 'M';
    salario = 20000;

    // %s para textos
    // %d para inteiros
    // %lf para double
    // %c para caractere
    printf("O streamer %s, do sexo %c, ganha %.2lf e tem %d anos,", nome, sexo, salario, idade);
    return 0;
}

