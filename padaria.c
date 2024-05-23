#include <stdio.h>

int main(){

    int pao, broa; 
    float arrecadado;

    printf("Quantos paes foram vendidos? ");
    scanf("%d", &pao);

    printf("Quantas broas foram vendidas? ");
    scanf("%d", &broa);

    arrecadado = ((0.92*pao) +(3.50*broa));
    printf("Hoje voce conseguiu arrecadar R$: %.2f ", arrecadado);

    printf("\nCom isso, voce deve colocar R$ %.2f na sua conta poupanca", 0.1*arrecadado);


    return 0;
}