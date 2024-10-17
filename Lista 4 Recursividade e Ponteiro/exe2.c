#include <stdio.h>

int somadosdigitos(int num, int soma){
    int total;
    if(num < 10){
        //retorna a ultima soma
        return soma +=  num;
    } 
    else{
        //faz a soma dos digitos 
        soma += (num%10);
        //atribui a soma final ao total
        total = somadosdigitos(num / 10, soma);   
    }

    //retorna a soma dos digitos
   return total;
}

int main(){
    //declaração das variáveis
    int num, soma = 0;

    //receber o número
    //printf("Digite um númeor inteiro:\n");
    scanf("%d", &num);

    //Mostrar o resultado
    printf("%d", somadosdigitos(num, soma));


    return 0;
}