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
#include <stdio.h>
int main(void){
    int vetor[10], vetor_pares[10], vetor_impares[10];
    int cont_pares = 0, cont_impares = 0, temp = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &vetor[10]);

        if((vetor[i]%2) == 0){
            vetor_pares[cont_pares] = vetor[i];
            cont_pares++;
        }else{
            vetor_impares[cont_impares] = vetor[i];
            cont_impares++;
        }
    }
    for(int i = 0; i < (cont_pares - 1); i++){
        for(int j = 0; j < (cont_pares - i - 1); j++){
            if(vetor_pares[j] > vetor_pares[j+1]){
                temp = vetor_pares[j];
                vetor_pares[j] = vetor_pares[j+1];
                vetor_pares[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < (cont_impares - 1); i++){
        for(int j = 0; j < (cont_impares - i - 1); j++){
            if(vetor_impares[j] < vetor_impares[j+1]){
                temp = vetor_impares[j];
                vetor_impares[j] = vetor_impares[j+1];
                vetor_impares[j+1] = temp;
            }
        }
    }
    int index_par = 0, index_impar = 0;
    for(int i = 0; i < 10; i++){
        if(cont_pares != 0){
            vetor[i] = vetor_pares[index_par];
            cont_pares--;
            index_par++;
        }else{
            vetor[i] = vetor_impares[index_impar];
            index_impar++;
        }
    }
    printf("\nVetor:");
    for(int i = 0; i < 10; i++){
        printf(" %i ", vetor[i]);
    }
    return 0;
}

/*10)Dada uma seqüência de n números reais, determinar os números que compõem a seqüência e o número de vezes que cada um deles ocorre na mesma.Exemplo: n = 8 Seqüência: -1.7,  3.0,  0.0,  1.5,  0.0, -1.7,  2.3, -1,7
Saída:       -1.7 ocorre 3 vezes
                   3.0 ocorre 1 vez
                   0.0 ocorre 2 vezes
                   1.5 ocorre 1 vez
                   2.3 ocorre 1 vez*/

#include <stdio.h>
int pertence(int num, int vetor[]){
    for(int i = 0; i < 10; i++){
        if(num == vetor[i]){
            return 1;
        }
    } 
    return 0;
}

int main(void){
    int vetor[10], vetor_oc[10] = {0}, vetor_qnt[10], cont_oc = 0;

    for(int i = 0; i < 10; i++){
        printf("Digito o numero %i: ", i+1);
        scanf("%i", &vetor[i]);
    }
    for(int i = 0; i < 10; i++){
        if(pertence (vetor[i], vetor_oc) == 0){
            vetor_oc[cont_oc] = vetor[i];
            cont_oc++;

            int cont = 0;
            for(int j = 0; j < 10; j++){
                if(vetor_oc[cont_oc - 1] == vetor[j]){
                    cont++;
                }
            }
            vetor_qnt[cont_oc - 1] = cont;
        }
    }
    print("Vetor:");
    for(int i = 0; i < cont_oc; i++){
        print("\n %i ocorre %i vezes", vetor_oc[i], vetor_qnt[i]);
    }
    return 0;
}