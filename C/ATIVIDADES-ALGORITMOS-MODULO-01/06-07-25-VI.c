//1) Fazer um algoritmo que: Leia um vetor contendo 10 números, que correspondem a matrículas de alunos. Ler 3 matrículas e imprima uma mensagem informando se eles estão ou não presentes no vetor.
#include <stdio.h>
int main(void)
{
    int mat_og[10], mat_temp[6];

    for(int i = 0; i < 10; i++)
    {
        printf("Digite a matrícula %i a ser salva: ", i + 1);
        scanf("%i", &mat_og[i]);
    }
    for(int i = 0; i < 3; i++)
    {
        printf("Digite a matrícula %i a ser comparada: ", i + 1);
        scanf("%i", &mat_temp[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        if(mat_temp[0] == mat_og[i])
        {
            mat_temp[3] = 1;
        }
        if(mat_temp[1] == mat_og[i])
        {
            mat_temp[4] = 1;
        }
        if(mat_temp[2] == mat_og[i])
        {
            mat_temp[5] = 1;
        }
    }
    if(mat_temp[3] == 1)
    {
        printf("A matrícula 1 está presente no vetor.\n");
    }
    else
    {
        printf("A matrícula 1 não está presente no vetor.\n");
    }
    if(mat_temp[4] == 1)
    {
        printf("A matrícula 2 está presente no vetor.\n");
    }
    else
    {
        printf("A matrícula 2 não está presente no vetor.\n");
    }
    if(mat_temp[5] == 1)
    {
        printf("A matrícula 3 está presente no vetor.\n");
    }
    else
    {
        printf("A matrícula 3 não está presente no vetor.\n");
    }
    return 0;
}

//2) Fazer um algoritmo que: Preencha 3 vetores, o primeiro com a nota da primeira prova, o segundo com a nota da segunda prova e o terceiro com a média das 2 primeiras notas, e imprima o resultado “APROVADO” para aqueles que obtiverem uma média igual ou acima de 6, e “REPROVADO” para quem obtiverem uma média abaixo de 6. OBS.: Saia do laço quando a primeira nota for igual a -1.
#include <stdio.h>
int main(void)
{
    int alunos, cont = 1;
    printf("Digite o número de alunos: ");
    scanf("%i", &alunos);

    float nota1[alunos], nota2[alunos], media[alunos];

    for(int i = 0; i < alunos; i++)
    {
        for(int j = 1; j <= 2; j++)
        {
            printf("Digite a %i nota do aluno %i: ", j, cont);
            scanf("%f", &nota1[i]);
            if(nota1[i] == -1)
            {
                return 0;
            }
            printf("Digite a %i nota do aluno %i: ", j, cont);
            scanf("%f", &nota2[i]);
            cont++;
            media[i] = (nota1[i] + nota2[i])/2.00;
            if(media[i] >= 6.00)
            {
                printf("Aprovado!\n");
            }
            else
            {
                printf("Reprovado!\n");
            }
        }
    }
    return 0;
}

//3) Preencha e imprima um vetor dos 20 primeiros números primos começando com o número 5000.
#include <stdio.h>
int main(void)
{
    int vetor1[20];
    int bool = 1, cont = 0, num = 5000;

    while(cont < 20)
    {
        for(int j = 2; j < num; j++)
        {
            if((num%j) == 0)
            {
                bool = 0;
            }
        }
        if(bool == 1)
        {
            vetor1[cont] = num;
            cont++;
        }
        num++;
    }
    for(int i = 0; i < 20; i++)
    {
        printf("%i, ", vetor1[i]);
    }
    printf("\n");
    return 0;
}

//4) Fazer um algorítimo que leia os valores de um vetor inteiro de tamanho 10, e imprima o valor da soma dos números ímpares presentes neste vetor.
#include <stdio.h>
int main(void)
{
    int vetor1[10];
    int soma = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("Digite o valor %i: ", i + 1);
        scanf("%i", &vetor1[i]);

        if((vetor1[i]%2) != 0)
        {
            soma = soma + vetor1[i];
        }
    }
    printf("O valor da soma é: %i\n", soma);
    return 0;
}

//5) Faça um algorítimo que leia um vetor de 5 posições, e preencha um segundo vetor, sendo que cada posição do segundo vetor receberá o valor do primeiro vetor na mesma posição multiplicado pelo maior valor dentro do primeiro vetor.
#include <stdio.h>
int main(void)
{
    int vetor1[5], vetor2[5];
    int maior = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("Digite o valor %i: ", i + 1);
        scanf("%i", &vetor1[i]);

        if(vetor1[i] >= maior)
        {
            maior = vetor1[i];
        }
    }
    for(int i = 0; i < 5; i++)
    {
        vetor2[i] = vetor1[i] * maior;
        printf("%i, ", vetor2[i]);
        //se não precisava colocar na tela, ignore!!!
    }
    printf("\n");
    return 0;
}

//6) Dado dois números inteiros X e Y, preencha um vetor em que é armazenado os primeiro X números múltiplos de Y.
#include <stdio.h>
int main(void)
{
    int x, y;

    printf("Digite o valor x: ");
    scanf("%i", &x);
    printf("Digite o valor y: ");
    scanf("%i", &y);
    int vetor1[x];

    for(int i = 0; i < x; i++)
    {
        vetor1[i] = y * (i + 1);
    }
    //se não precisava colocar na tela, ignore!!!
    for(int i = 0; i < x; i++)
    {
        printf("%i, ", vetor1[i]);
    }
    printf("\n");
    return 0;
}
