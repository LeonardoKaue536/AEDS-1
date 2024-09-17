#include <stdio.h>
void triangulo(){
    //Declaração das variáveis
    float l1, l2, l3;

    //receber um valor para os lados
    printf("Digite 3 valores para lados de um trianguo:\n");
    scanf("%f %f %f", &l1, &l2, &l3);

    //repetição até que apareça um número negativo
    while (l3 >= 0)
    { 
        if(l1 < l2 + l3 && l2 < l1 + l3 && l3 < l2 + l1){
            if(l1 == l2 && l2 == l3){
                printf("Triangulo equilatero\n");
            }else if((l1 == l2 || l2 == l3) && (l1 != l3 || l2 != l3)){
                printf("Triangulo isoceles\n");
            }else{
                printf("Triangulo escaleno\n");
            }
        }else{
            printf("Nao tringulo\n");
        }

        printf("Digite 3 valores para lados de um trianguo:\n");
        scanf("%f %f %f", &l1, &l2, &l3);

    }
    



}


int main(){
    triangulo();

    return 0;
}