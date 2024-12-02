#include <stdio.h>
#include <string.h>

int main(){
    // Entrada de dados fazendo a leitura com o scanf

    // Declarar variaveis
    int idade;
    float salario;
    char nome[50];

    // Realizando a leitura
    printf("Digite a sua idade: ");
    scanf("%d", &idade); //Codigo para realizar leitura = scanf ("% placeholder %*c", nomeDaVariavel);

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Digite seu nome: ");
    scanf("%s", nome); // O vetor ja é uma referencia por isso nao precisa do "&"
    // O scanf armazena somente uma palavra, em um nome com espaço Ex: Maria da Silva, ele vai armazenar somente Maria

    printf("Idade: %d\n",idade);
    printf("Nome: %s\n",nome);
    printf("Salario: %.2f\n",salario);

    // Leitura de nome com espaço
    // Usando o fgets em uma funçao

    //Funçoes para facilitar leitura
    void limpar_entrada(){
        char c;
        while ((c = getchar()) != '\n' && c != EOF) {}
    }

    void ler_texto(char *buffer, int lenght){
        fgets(buffer, lenght, stdin);
        strtok(buffer, "\n");
    }

    char nome1[50];
    printf("Digite o nome 1: ");
    limpar_entrada();
    ler_texto(nome1, 50);

    printf("Nome = %s", nome1);
    return 0;
}
