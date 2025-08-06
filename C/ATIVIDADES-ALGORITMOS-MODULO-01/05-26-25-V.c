//1) Uma loja tem tem uma política de descontos de acordo com o valor da compra do cliente. Os descontos começam acima dos R$500. A cada 100 reais acima dos R$500,00 o cliente ganha 1% de desconto cumulativo até 25%.
//Por exemplo: R$500 = 1% || R$600,00 = 2% … etc…
//Faça um programa que exiba essa tabela de descontos no seguinte formato:
//Valordacompra – porcentagem de desconto – valor final
#include <stdio.h>
int main(){
    float valor = 500.00;

    for(int i = 1; i < 25; i++){
        printf("\nValor da Compra: R$ %.1f -- Porcentagem de desconto: %d %% --  Valor Final: R$ %.1f", valor, i, (valor-(valor*i/100))); 
        valor = valor + 100;
    }

    return 0;
}


//2) Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado daquele tamanho com asteriscos. Seu programa deve usar laços de repetição e funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.
//Por exemplo, para lado igual a 5:
//*****
//*****
//*****
//*****
//*****
#include <stdio.h>
int main(void)
{
    int lado;

    do
    {
        printf("Digite a tamanho do lado do quadrado: ");
        scanf("%i", &lado);
    }while(lado < 1 || lado > 20);
    for(int i = 0; i < lado; i++)
    {
        for(int j = 0; j < lado; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}

//3) Faça um programa que recebe a altura de um triangulo em um número inteiro e imprima-o utilizando asteriscos.
#include <stdio.h>
int main(void)
{
    int lado, cont = 0;

    printf("Digite a tamanho do lado do triangulo: ");
    scanf("%i", &lado);

    for(int i = 0; i < lado; i++)
    {
        for(int j = 0; j <= cont; j++)
        {
            printf("*");
        }
        printf("\n");
        cont++;
    }
    return 0;
}

//4)rie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos de uma P.A (Progressão Aritmética), armazenando esses valores em um vetor de tamanho 10.
#include <stdio.h>
int main(void){
    int num, razao, vetor[10];

    printf("Digite um numero: ");
    scanf("%i", &num);
    printf("Digite uma razão: ");
    scanf("%i", &razao);

    for(int i = 0; i < 10; i++){
        if(i == 0){
            vetor[i] = num;
        }else{
            vetor[i] = vetor[i - 1] + razao;
        }
    }
    printf("Vetor:");
    for(int i = 0; i < 10; i++){
        printf(" %i ", vetor[i]);
    }
    return 0;
}

//5)Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos de uma P.G (Progressão Geométrica), armazenando esses valores em um vetor de tamanho 10.
#include <stdio.h>
int main(void){
    int num, razao, vetor[10];

    printf("Digite um numero: ");
    scanf("%i", &num);
    printf("Digite uma razão: ");
    scanf("%i", &razao);

    for(int i = 0; i < 10; i++){
        if(i == 0){
            vetor[i] = num;
        }else{
            vetor[i] = vetor[i - 1] * razao;
        }
    }
    printf("Vetor:");
    for(int i = 0; i < 10; i++){
        printf(" %i ", vetor[i]);
    }
    return 0;
}

/*6)Como criar um programa que checa se o número é palíndromo
Número palíndromo é aquele que, se lido de trás para frente e de frete para trás, é o mesmo.
Exemplos: 2112, 777, 2442 etc
O número deve ter 4 dígitos.*/
#include <stdio.h>
int main(void){
    int num = 0, vetor[4];

    while(1){
        printf("Digite um numero inteiro de quatro digitos: ");
        scanf("%i", &num);

        if(num > 999 && num < 10000){
            break;
        }
    }
    vetor[0] = num/1000;
    vetor[1] = (num%1000)/100;
    vetor[2] = (num%100)/10;
    vetor[3] = (num%10)/1;
    if(vetor[0] == vetor[3] && vetor[1] == vetor[2]){
        printf("É palindromo!");
    }else{
        printf("Não é palindromo");
    }
    return 0;
}