//1) Faça um programa em C que mostre a tabuada do número 5. (considerar tabuada do número 1 ao 10).
#include <stdio.h>
int main(void)
{
    int num = 5, cont = 1;

    while(cont <= 10)
    {
        printf("%i x %i = %i\n", num, cont, num*cont);
        cont++;
    }
    return 0;
}

//2) Faça um programa em C que mostre a tabuada de qualquer número escolhido pelo usuário (considerar tabuada do número 1 ao 10).
#include <stdio.h>
int main(void)
{
    int num, cont = 1;

    printf("Digite o número escolhido: ");
    scanf("%i", &num);

    while(cont <= 10)
    {
        printf("%i x %i = %i\n", num, cont, num*cont);
        cont++;
    }
    return 0;
}

//3. Faça um programa em C (com a estrutura do...while) que leia 20 valores inteiros e:
//– Encontre e mostre o maior valor;
//– Encontre e mostre o menor valor;
//– Calcule e mostre a média dos números lidos;
#include <stdio.h>
int main(void)
{
    int num, cont = 1, maior = 0, menor = 0;
    float  soma = 0;

    do
    {
        printf("Digite o valor %i: ", cont);
        scanf("%i", &num);
        if(maior == 0 && menor == 0)
        {
            maior = num;
            menor = num;
        }
        if(num >= maior)
        {
            maior = num;
        }
        if(num <= menor)
        {
            menor = num;
        }
        soma = soma + num;
        cont++;
    }while(cont <= 20);
    printf("O maior é %i, o menor é %i e a média é %.2f\n", maior, menor, soma/cont);
    return 0;
}

//4. Faça um programa em C que receba um número inteiro e posiavo, e diga se esse número é primo ou não. Obs: Um número é primo somente quando for divisível por 1 e por ele mesmo.
#include <stdio.h>
int main(void){
    int num = 0;
    int num_prim = 1;
    printf("Digite um número inteiro:");
    scanf("%d", &num);

    for(int i = 2; i < num; i++){
        if((num%i) == 0){
            num_prim = 0;
            break;
        }
    }
    if(num_prim){
        printf("É primo!\n");
    }else{
        print("Não é primo!");
    }
    return 0;
}

//5. Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles estão no intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas informações.
#include <stdio.h>
int main(void){
    int num[10] = {0};
    int fora = 0, dentro = 0;
    for(int i = 0; i < 10; i++){
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &num[i]);
        
        if(num[i] >= 10 && num[i] <= 20){
            dentro++;
        }else{
            fora++;
        }
    }
    printf("Intervalo [10,20]\nValores dentro: %i, Valores fora: %i", dentro, fora);
    return 0;
}

//6) Dado um país A, com 5000000 de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com 7000000 de habitantes e uma taxa de natalidade de 2% ao ano, escrever um programa em C que seja capaz de calcular e mostrar o tempo necessário para que a população do país A ultrapasse a população do país B. (Ualize a estrutura while).
#include <stdio.h>
int main(void){
    float pais_a = 5000000, pais_b = 7000000;
    int cont = 0;
    while(pais_a <= pais_b){
        pais_a *= 0.03;
        pais_b *= 0.02;
        cont++;
    }
    printf("Tempo necessario: %i", cont);
    return 0;
}

//7. Faça um algoritmo que calcule o fatorial de um número.
#include <stdio.h>
int main(void){
    int result = 1, num;
    printf("Digite um numero: ");
    scanf("%i", &num);
    int f = num;

    for(int i = 0; i <= num; i++){
        result *= f;
        f--; 
    }
    printf("Fatorial %i: %i", num, result);
    return 0;
}