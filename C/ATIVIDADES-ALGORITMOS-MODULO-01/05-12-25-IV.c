//1) Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.
#include <stdio.h>
int main(void)
{
    float num[10], quad[10];

    for(int i = 0; i < 10; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &num[i]);
        quad[i] = num[i] * num[i];
    }
    printf("Conjunto 1: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%.2f, ", num[i]);
    }
    printf("\nConjunto 2: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%.2f, ", quad[i]);
    }
    printf("\n");
    return 0;
}

//2) Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.
#include <stdio.h>
int main(void)
{
    int num[8];
    int a, b;

    for(int i = 0; i < 8; i++)
    {
        printf("Digite o valor %i:", i + 1);
        scanf("%i", &num[i]);
    }

    printf("Digite a posição 1: ");
    scanf("%i", &a);
    printf("Digite a posição 2: ");
    scanf("%i", &b);
    printf("O resultado da soma é %i\n", num[a]+num[b]);
    return 0;
}

//3) Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
#include <stdio.h>
int main(void)
{
    int num[10];
    int quantpar = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("Digite o valor %i: ", i + 1);
        scanf("%i", &num[i]);

        if((num[i] % 2) == 0)
        {
            quantpar++;
        }
    }
    printf("Você digitou %i numeros pares\n", quantpar);
    return 0;
}

//4) Preencher um vetor com 5 numeros e a medida que for digitado o numero, calcular o cubo e mostrar em outro vetor. Mostrar os dois vetores.
#include <stdio.h>
int main(void)
{
    int num[5], cubo[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Digite o valor %i: ", i + 1);
        scanf("%i", &num[i]);
        cubo[i] = num[i] * num[i] * num[i];
    }
    printf("Conjunto 1: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%i, ", num[i]);
    }
    printf("\nConjunto 2: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%i, ", cubo[i]);
    }
    printf("\n");
    return 0;
}

//5) Preencher um vetor com os numeros 10 a 20, e depois mostrar os elementos pares do vetor de trás prá frente
#include <stdio.h>
int main(void)
{
    int num[11];
    int x = 10;

    for(int i = 0; i < 11; i++)
    {
        num[i] = x;
        x++;
    }
    printf("Valores pares: ");
    for(int i = 10; i >= 0; i--)
    {
        if((num[i] % 2) == 0)
        {
            printf("%i, ", num[i]);
        }
    }
    printf("\n");
    return 0;
}

//6) Preencher um vetor com os numeros 10 a 20, e depois mostrar os elementos ímpares do vetor.
#include <stdio.h>
int main(void)
{
    int num[11];
    int x = 10;

    for(int i = 0; i < 11; i++)
    {
        num[i] = x;
        x++;
    }
    printf("Valores ímpares: ");
    for(int i = 0; i < 10; i++)
    {
        if((num[i] % 2) != 0)
        {
            printf("%i, ", num[i]);
        }
    }
    printf("\n");
    return 0;
}

//7) Ler um vetor de 10 elementos. Crie um segundo vetor, com todos os elementos na ordem inversa, ou seja, o último elemento passará a ser o primeiro, o penúltimo será o segundo e assim por diante. Imprima os dois vetores.
#include <stdio.h>
int main(void)
{
    int num[10], decresc[10];
    int x = 9;

    for(int i = 0; i < 10; i++)
    {
        printf("Digite o valor %i: ", i + 1);
        scanf("%i", &num[i]);

        decresc[x] = num[i];
        x--;
    }
    printf("Conjunto 1: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%i, ", num[i]);
    }
    printf("\nConjunto 2: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%i, ", decresc[i]);
    }
    printf("\n");
    return 0;
}

//8) Ler um vetor de 10 elementos inteiros e positivos. Criar um segundo vetor da seguinte forma: os elementos de índice par receberão os respectivos elementos divididos por 2; os elementos de índice ímpar receberão os respectivos elementos multiplicados por 3. Imprima os dois vetores.
#include <stdio.h>
int main(void)
{
    int num[10], op[10];

    for(int i = 0; i < 10; i++)
    {
        printf("Digite o valor %i: ", i + 1);
        scanf("%i", &num[i]);

        if((i % 2) == 0)
        {
            op[i] = num[i]/2;
        }
        else
        {
            op[i] = num[i]*3;
        }
    }
    printf("Conjunto 1: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%i, ", num[i]);
    }
    printf("\nConjunto 2: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%i, ", op[i]);
    }
    printf("\n");
    return 0;
}

//9)Utilizando vetores, crie um programa que organize uma quantidade qualquer de números inteiros fornecidos pelo usuário da seguinte forma: primeiro os números pares em ordem crescente e depois os números ímpares em ordem decrescente.
