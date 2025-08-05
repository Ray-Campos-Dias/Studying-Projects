//1) Faça um algoritmo em C que leia um número n, some todos os números inteiros de 1 a n e mostre o resultado obtido.
#include <stdio.h>
int main(void){
    int n = 0, soma = 0;
    printf("Digite um numero: ");
    scanf("%i", &n);
    for(int i = 1; i <= n; i++){
        soma += i;
    }
    printf("Soma: %i", soma);
    return 0;
}

//2)Faça um programa para calcular x elevado a y. Os valores de x e y serão fornecidos pelo usuário do programa.
#include <stdio.h>
int main(void){
    int x = 0, y = 0, result = 1;

    printf("Digite o valor x: ");
    scanf("%i", &x);
    printf("Digite o valor y: ");
    scanf("%i", &y);

    while(y){
        result *= x;
        y--;
    }
    printf("Resultado: %i", result);
    return 0;
}

//3) Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores positivos diferentes de n. Construa um programa em C que verifica se um dado número é perfeito. Exemplo: 6 é perfeito, pois 1 + 2 + 3 = 6.
#include <stdio.h>
int main(void){
    int num = 0, soma = 0;
    print("Digite um numero: ");
    scanf("%i", &num);

    for(int i = 1; i <= num; i++){
        if((num%i) == 0){
            soma += i;
        }
    }
    if(soma == num){
        printf("É Perfeito!");
    }else{
        printf("Não é perfeito");
    }
    return 0;
}

// 4)Faça um algoritmo em C capaz de realizar o cálculo de rentabilidade de uma poupança, esse algoritmo deve receber como entrada o valor inicial e o valor dos aportes mensais (ambos em reais) que o usuário está disposto a guardar. Como saída, o programa deve imprimir na tela o montante após 12 meses aplicado a uma taxa de 0,5 % ao mês de rentabilidade.
#include <stdio.h>
int main(void){
    float valor_inicial = 0.0, aporte = 0.0, result = 0.0;

    printf("Digite o valor inicial: ");
    scanf("%f", &valor_inicial);
    printf("Digite o valor dos aportes mensais: ");
    scanf("%f", &aporte);
    result = valor_inicial;

    for(int i = 1; i <= 12; i++){
        if(i != 1){
            result += aporte;
            result *= 0.005;
        }else{
            result *= 0.005;
        }
    }
    printf("O montanto final é: %.5f", result);
    return 0;
}