//1) Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’ (maiúscula ou minúscula).
#include <stdio.h>
int main(void)
{
    char nome[10];

    printf("Digite o seu nome: ");
    fgets(nome, 10, stdin);

    if(nome[0] == 'A' || nome[0] == 'a')
    {
        printf("%s", nome);
    }
    return 0;
}

//2) Faça um programa que leia um nome e imprima as 4 primeiras letras do nome.
#include <stdio.h>
int main(void)
{
    char nome[10];

    printf("Digite o seu nome :");
    fgets(nome, 10, stdin);

    printf("Primeiras 4 letras: ");
    for(int i = 0; i < 4; i++)
    {
        printf("%c ", nome[i]);
    }
    printf("\n");
    return 0;
}

//3) Digite um nome, calcule e retorne quantas letras tem esse nome.
#include <stdio.h>
int main(void)
{
    char nome[10], cont = 0;
    for(int i = 0; i < 10; i++)
    {
        nome[i] = 0;
    }
    printf("Digite o um nome: ");
    fgets(nome, 10, stdin);
    for(int i = 0; i < 10; i++)
    {
        if(nome[i] != 0 && nome[i] != '\0')
        {
            cont++;
        }
    }
    printf("O nome possui %i letras\n", cont - 1);
    return 0;
}

//4) Faca um programa que receba do usuário uma string. O programa imprime a string sem suas vogais.
#include <stdio.h>
int main(void)
{
    char string[15];

    printf("Digite uma string :");
    fgets(string, 15, stdin);

    for(int i = 0; i < 15; i++)
    {
        if(string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U')
        {
            string[i] = ' ';
        }
    }
    printf("String sem as vogais : %s\n", string);
    return 0;
}

//5) Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
//Horário: composto de hora, minutos e segundos.
//Data: composto de dia, mês e ano.
//Compromisso: composto de uma data, horário e texto que descreve o compromisso.
typedef struct
{
    int hora;
    int minutos;
    int segundos;
}horario;
typedef struct
{
    int dia;
    int mes;
    int ano;
}data;
typedef struct
{
    horario h0;
    data d0;
    char text[30];
}compromisso;
#include <stdio.h>
int main(void)
{

    return 0;
}

//6) Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.
typedef struct
{
    char nome[50];
    int idade;
    char endereco[50];
}ficha;
#include <stdio.h>
int main(void)
{
    ficha pessoa1;

    printf("Digite o seu nome: ");
    fgets(pessoa1.nome, 50, stdin);
    printf("Digite a sua idade: ");
    scanf("%i", &pessoa1.idade);
    getchar();
    printf("Digite o seu endereço: ");
    fgets(pessoa1.endereco, 50, stdin);

    printf("Nome: %s", pessoa1.nome);
    printf("Idade: %i\n", pessoa1.idade);
    printf("Endereço: %s", pessoa1.endereco);
    return 0;
}

//7) Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
typedef struct
{
    char nome [50];
    int matricula;
    char curso[50];
}aluno;
#include <stdio.h>
int main(void)
{
    aluno alunos[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Digite o nome do aluno %i: ", i + 1);
        fgets(alunos[i].nome, 50, stdin);
        printf("Digite a matriculo do aluno %i: ", i + 1);
        scanf("%i", &alunos[i].matricula);
        getchar();
        printf("Digite o curso do aluno %i: ", i + 1);
        fgets(alunos[i].curso, 50, stdin);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("Aluno %i: Nome - %s Matricula - %i\n Curso - %s", i + 1, alunos[i].nome, alunos[i].matricula, alunos[i].curso);
    }
    return 0;
}

//8) Defina uma estrutura que irá representar bandas de música. Essa estrutura deve ter o nome da banda, que tipo de música ela toca, o número de integrantes e em que posição do ranking essa banda está dentre as suas 5 bandas favoritas.
typedef struct
{
    char nome[30];
    char tipo[30];
    int num_pes;
    int rank;
}fichabanda;
#include <stdio.h>
int main(void)
{
    fichabanda bandas[5];
    return 0;
}

//9) Crie um looping para preencher as 5 estruturas de bandas criadas no exemplo passado. Após criar e preencher, exiba todas as informações das bandas/estruturas.
typedef struct
{
    char nome[30];
    char tipo[30];
    int num_pes;
    int rank;
}fichabanda;
#include <stdio.h>
int main(void)
{
    fichabanda bandas[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Digite o nome da banda %i: ", i + 1);
        fgets(bandas[i].nome, 30, stdin);
        printf("Digite o tipo de música: ");
        fgets(bandas[i].tipo, 30, stdin);
        printf("Digite o número de integrantes: ");
        scanf("%i", &bandas[i].num_pes);
        printf("Em um ranking de 1 a 5 das sua bandas favoritas, onde ela está? ");
        scanf("%i", &bandas[i].rank);
        getchar();
    }
    for(int i = 0; i < 5; i++)
    {
        printf("Banda %i: Nome - %s Tipo - %s Integrantes - %i\n Ranking - %i\n", i + 1, bandas[i].nome, bandas[i].tipo, bandas[i].num_pes, bandas[i].rank);
    }
    return 0;
}

//10) Crie uma função que peça ao usuário um número de 1 até 5. Em seguida, seu programa deve exibir informações da banda cuja posição no seu ranking é a que foi solicitada pelo usuário.
typedef struct
{
    char nome[30];
    char tipo[30];
    int num_pes;
    int rank;
}fichabanda;
#include <stdio.h>
int main(void)
{
    fichabanda bandas[5];
    int pos = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("Digite o nome da banda %i: ", i + 1);
        fgets(bandas[i].nome, 30, stdin);
        printf("Digite o tipo de música: ");
        fgets(bandas[i].tipo, 30, stdin);
        printf("Digite o número de integrantes: ");
        scanf("%i", &bandas[i].num_pes);
        printf("Em um ranking de 1 a 5 das sua bandas favoritas, onde ela está? ");
        scanf("%i", &bandas[i].rank);
        getchar();
    }
    do
    {
    printf("Digite um número de 1 até 5: ");
    scanf("%i", &pos - 1);
    }while(pos < 0 || pos > 4);
    printf("Banda %i: Nome - %s Tipo - %s Integrantes - %i\n Ranking - %i\n", pos, bandas[pos].nome, bandas[pos].tipo, bandas[pos].num_pes, bandas[pos].rank);
    return 0;
}
