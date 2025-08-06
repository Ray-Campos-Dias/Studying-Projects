//1)Desenvolva um algoritmo que receba os valores de uma matriz de ordem 3x3 de números inteiros e exiba o produto dos elementos de sua diagonal principal.
#include <stdio.h>
int main(void){
    int matriz[3][3];
    int produto = 1;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor [%i][%i] da matriz: ", i, j);
            scanf("%i", &matriz[i][j]);
            if(i == j){
                produto = produto * matriz[i][j];
            }
        }
    }
    printf("O valor do produto é: %i\n", produto);
    return 0;
}

//2)Faça uma matriz de tamanho 3x3. Em seguida, imprima a soma dos valores contidos em sua diagonal secundaria subtraído pela soma dos elementos da diagonal principal.
#include <stdio.h>
int main(void){
    int matriz[3][3];
    int soma1 = 0, soma2 = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor [%i][%i] da matriz: ", i, j);
            scanf("%i", &matriz[i][j]);
            if(i == j){
                soma1 = soma1 + matriz[i][j];
            }
            if((i + j) == 2){
                soma2 = soma2 + matriz[i][j];
            }
        }
    }
    printf("O valor é: %i\n", soma2 - soma1);
    return 0;
}

//3)Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da diagonal principal.
#include <stdio.h>
int main(void){
    int matriz[3][3], soma = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor [%i][%i] da matriz: ", i, j);
            scanf("%i", &matriz[i][j]);
            if(j > i){
                soma += matriz[i][j];
            }
        }
    }
    printf("O valor da soma é: %i", soma);
    return 0;
}

//4)Faça um programa que leia um nome e imprima as 4 últimas letras do nome.
#include <stdio.h>
int main(void){
    char nome[30];
    int len = 0, j;

    printf("Digite um nome: ");
    fgets(nome, 30, stdin);
    while(nome[len] != '\0'){
        len++;
    }
    j = len - 4;
    for(int i = 0; i < len; i++){
        if(i >= j){
            printf("%c", nome[i]);
        }
    }
    return 0;
}

//5)Faça um programa que verifique se uma palavra digitada pelo usuário é um palíndromo.
#include <stdio.h>
int main(void){
    char nome[50];
    int index = 0, cont = 0;

    printf("Digite um nome: ");
    fgets(nome, 50, stdin);

    while(nome[index] != '\0'){
        cont++;
        index++;
    }
    for(int i = 0; i < cont; i++){
        if(nome[i] != nome[cont - i - 1]){
            printf("Não é um palindromo!");
            return 0;
        }
    }
    printf("É palindrom!");
    return 0;
}

//6)Construa uma estrutura Funcionário com nome, número de matrícula, tempo de serviço, idade e CPF. Leia do usuário a informação de 3 funcionários, armazene em vetor dessa estrutura e imprima na tela o nome do funcionário como mais tempo de serviço na empresa.
#include <stdio.h>

typedef struct{
    char nome[80];
    int matricula;
    int tempo_servico;
    int idade;
    long long cpf;
}funcionario;

int main(void){
    funcionario funcionario_df[3];
    int index_maior = 0, maior_tempo = 0;

    for(int i = 0; i < 3; i++){
        printf("Digite o nome do funcionario %i: ", i + 1);
        fgets(funcionario_df[i].nome, 80, stdin);
        printf("Digite o matricula do funcionario %i: ", i + 1);
        scanf("%i", &funcionario_df[i].matricula);
        printf("Digite o tempo de serviço do funcionario %i: ", i + 1);
        scanf("%i", &funcionario_df[i].tempo_servico);
        printf("Digite a idade do funcionario %i: ", i + 1);
        scanf("%i", &funcionario_df[i].idade);
        printf("Digite o CPF do funcionario %i: ", i + 1);
        scanf("%i", &funcionario_df[i].cpf);
    }
    for(int i = 0; i < 3; i++){
        if(funcionario_df[i].tempo_servico >= maior_tempo){
            maior_tempo = funcionario_df[i].tempo_servico;
            index_maior = i;
        }
    }
    printf("Funcionario com maior tempo: %s", funcionario_df[index_maior].nome);
    return 0;
}