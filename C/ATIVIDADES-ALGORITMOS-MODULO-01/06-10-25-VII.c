//1) Faça um programa que lê uma matriz de 3 x 3 elementos usando um comando for, multiplica cada elemento por 5 e imprime o resultado.
#include <stdio.h>
int main(void)
{
    int matrix[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Digite o valor [%i, %i] da matriz: ", i, j);
            scanf("%i", &matrix[i][j]);
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf(" %i ", matrix[i][j] * 5);
        }
        printf("\n");
    }
    return 0;
}

//2)

//3) Faça um algoritmo que receba valores inteiros de uma matriz 5×2 e preencha um vetor inteiro de tamanho 10. Imprima o vetor preenchido.
#include <stdio.h>
int main(void)
{
    int matriz1[5][2], vetor1[10];
    int cont = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Digite o valor [%i, %i] da matriz: ", i, j);
            scanf("%i", &matriz1[i][j]);
            vetor1[cont] = matriz1[i][j];
            cont++;
        }
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%i, ", vetor1[i]);
    }
    printf("\n");
    return 0;
}

//4) Desenvolva um algoritmo que receba os valores de uma matriz de ordem 3x3 de números inteiros e exiba os elementos de sua diagonal principal.
#include <stdio.h>
int main(void)
{
    int matriz1[3][3];
    int cont = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Digite o valor [%i, %i] da matriz: ", i, j);
            scanf("%i", &matriz1[i][j]);
        }
    }
    for(int i = 0; i < 3; i++)
    {
        printf("%i , ", matriz1[i][cont]);
        cont++;
    }
    return 0;
}

//5)0 Faca uma matriz de tamanho 3x3. Em seguida, imprima a soma dos valores contidos em sua diagonal secundaria.
#include <stdio.h>
int main(void)
{
    int matriz1[3][3];
    int cont = 2, result = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Digite o valor [%i, %i] da matriz: ", i, j);
            scanf("%i", &matriz1[i][j]);
        }
    }
    for(int i = 0; i < 3; i++)
    {
        printf("%i , ", matriz1[i][cont]);
        cont--;
        result += matriz1[i][cont];
    }
    printf("\n");
    printf("Soma: %i", result);
    printf("\n");
    return 0;
}

//5)1
#include <stdio.h>
int main(void)
{
    int matriz1[3][3];
    int result = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Digite o valor [%i, %i] da matriz: ", i, j);
            scanf("%i", &matriz1[i][j]);
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if((i + j) == 2)
            {
                printf("%i, ", matriz1[i][j]);
                result += matriz1[i][j];
            }
        }
    }
    printf("\n");
    printf("Soma: %i", result);
    printf("\n");
    return 0;
}

//6) Faca uma matriz de tamanho 5x5. Em seguida, imprima o produto dos valores contidos em sua diagonal principal.
#include <stdio.h>
int main(void)
{
    int matriz1[5][5];
    int cont = 0, result = 1;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("Digite o valor [%i, %i] da matriz: ", i, j);
            scanf("%i", &matriz1[i][j]);
        }
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i == j)
            {
                result = result * matriz1[i][j];
            }
        }
    }
    printf("%i\n", result);
    return 0;
}

//7) Escreva um algoritmo que leia uma matriz M(5x5) e crie dois vetores que contenham respectivamente as somas das linhas e das colunas de M. Escreva a matriz e os vetores criados.
#include <stdio.h>
int main(void)
{
    int matriz[5][5];
    int vetor1[5] = {0, 0, 0, 0, 0}, vetor2[5] = {0, 0, 0, 0, 0};

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("Digite o valor [%i, %i] da matriz: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            vetor1[i] += matriz[i][j];
        }
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            vetor2[i] += matriz[i][j];
        }
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf(" %i ", matriz[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%i, ", vetor1[i]);
    }
    printf("\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%i, ", vetor2[i]);
    }
    printf("\n");
    return 0;
}

//8) Faça um algoritmo para ler uma matriz 20x20. O algoritmo deve escrever na tela apenas os números primos. Os que não forem primos devem ser substituídos por Zero.
#include <stdio.h>
int main(void)
{
    int matriz[20][20];

    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 20; j++)
        {
            printf("Digite o valor [%i, %i] da matriz: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 20; j++)
        {
            for(int k = 2; k < matriz[i][j]; k++)
            {
                if((matriz[i][j]%k) == 0 || matriz[i][j] == 1)
                {
                    matriz[i][j] = 0;
                    break;
                }
            }
        }
    }
    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 20; j++)
        {
            printf(" %i ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

//9) Faça um programa para criar três matrizes 3x4 de números reais, A, B e C. As matrizes A e B devem ser preenchidas com valores digitados pelo usuário. O programa deve calcular a soma das matrizes A e B e armazenar o resultado na matriz C. Ao final, o programa deverá exibir o conteúdo de C.
#include <stdio.h>
int main(void)
{
    int a[3][4], b[3][4], c[3][4];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("Digite o valor [%i, %i] da matriz A: ", i, j);
            scanf("%i", &a[i][j]);
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("Digite o valor [%i, %i] da matriz B: ", i, j);
            scanf("%i", &b[i][j]);
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(c[i][j] < 10)
            {
                printf("  %i ", c[i][j]);
            }
            else
            {
                printf(" %i ", c[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

//10) Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.
#include <stdio.h>
int main(void)
{
    int matriz[5][5], num, bool = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("Digite o valor [%i, %i] da matriz: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("Digite o valor a ser buscado: ");
    scanf("%i", &num);
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(matriz[i][j] == num)
            {
                printf("Valor encontrado na posição [%i, %i]\n", i, j);
                bool = 1;
            }
        }
    }
    if(bool == 0)
    {
        printf("Valor não encontrado!\n");
    }
    return 0;
}

//11) Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abaixo da diagonal principal.
#include <stdio.h>
int main(void)
{
    int matriz[5][5], result = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("Digite o valor [%i, %i] da matriz: ", i, j);
            scanf("%i", &matriz[i][j]);
            if(i > j)
            {
                result += matriz[i][j];
            }
        }
    }
    printf("O valor da soma é: %i\n", result);
    return 0;
}

//12) Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta. Uma matriz transposta é obtida de uma matriz original trocando suas linhas por colunas.
#include <stdio.h>
int main(void)
{
    int matriz1[3][3], matriz2[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Digite o valor [%i, %i] da matriz: ", i, j);
            scanf("%i", &matriz1[i][j]);
            matriz2[j][i] = matriz1[i][j];
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf(" %i ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf(" %i ", matriz2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
