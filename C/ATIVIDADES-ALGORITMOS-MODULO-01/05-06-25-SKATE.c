#include <stdio.h>
int main(void){
    float notas[5] = {0}, soma = 0;
    int index_menor = 0, index_maior = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite a nota %i: ", i + 1);
        scanf("%f", notas[i]);
    }
    for(int i = 0; i < 5; i++){
        if(notas[i] <= notas[index_menor]){
            index_menor = i;
        }
        if(notas[i] >= notas[index_maior]){
            index_maior = i;
        }
    }
    printf("Notas eliminadas: %f, %f\n", notas[index_menor], notas[index_maior]);
    for(int i = 0; i < 5; i++){
        if(i != index_maior && i != index_menor){
            soma += notas[i];
        }
    }
    printf("O resultado é: %.2f", soma/3);
    return 0;
}