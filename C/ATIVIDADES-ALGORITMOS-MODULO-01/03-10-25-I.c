//1) Escreva um programa para ler 2 valores (considere que não serão informados valores iguais) e escrever o maior deles.
#include <stdio.h>
int main(void) {
	int a,b ;
	
	printf ("Digite um numero inteiro\n") ;
	scanf ("%d", &a) ;
	printf ("Digite um numero inteiro\n") ;
	scanf ("%d", &b) ;
	
	if (a>b) {
		printf ("O maior e %d", a) ;
	}
	else {
		printf ("O maior e %d", b) ;
	}

	return 0;
}

//2) Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês em que ela nasceu).
#include<stdio.h>
int main(void){
	int a;

	printf ("Digite o ano de seu nascimento com 4 digitos\n");
	scanf ("%d", &a);

	if(a<2008) {
		printf("Pode votar");
	}
	else {
		printf("Não pode votar");
	}
	return 0;
}

//3) Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234. Devem ser impressas as seguintes mensagens:
//ACESSO PERMITIDO caso a senha seja válida.
//ACESSO NEGADO caso a senha seja inválida.
#include<stdio.h>
int main(void){
	int a;

	printf ("Digite a senha de 4 digitos\n");
	scanf ("%d", &a);

	if(a==1234) {
		printf("ACESSO PERMITIDO");
	}
	else {
		printf("ACESSO NEGADO");
	}
	return 0;
}

//4) As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia, e R$ 0,25 se forem compradas pelo menos doze. Escreva um programa que leia o número de maçãs compradas, calcule e escreva o valor total da compra.
#include<stdio.h>
int main(void){
	float a,b;

	printf ("Digite a quantidade de maçãs compradas\n");
	scanf ("%f", &a);

	if (a>12) {
		b=a*0.25, printf("O valor a ser pago é %.2f" ,b);
	}
	else {
		b=a*0.30, printf("O valor a ser pago é %.2f" ,b);
	}
	return 0;
}

//

#include<stdio.h>
int main(void){
	float preco=0.30,a,b,total;

	printf ("Digite a quantidade de maçãs compradas\n");
	scanf ("%f", &a);

	if (a>=12){
		preco=0.25;
	}
	total = a*preco;
	printf("O valor a ser pago é %f" ,total);
	return 0;
}