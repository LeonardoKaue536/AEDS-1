#include <stdio.h>

int contecasas(int num, int conte){
    if(num < 10){
        //retorna o vaor quando chegar no último dígito
        return conte += 1;
    } 
    else{
        //passa o total da quantidade de digitos do número
        conte = contecasas(num / 10, conte+1);   
    }

    //retorna a quantidade de dígitos
    return conte;
}

int main(){
    //declaração das variáveis
    int num, conte = 0;

    //receber o número
    printf("Digite um númeor inteiro:\n");
    scanf("%d", &num);

    //Mostrar o resultado
    printf("O número tem %d digitos\n", contecasas(num, conte));


    return 0;
}