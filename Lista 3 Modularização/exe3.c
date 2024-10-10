#include <stdio.h>

//procedimento para colocar em ordem crescente
void ordemcrescente(int n){
    //declaração das variáveis
    int a, b, c;

    //Repetição para o número de conjuntos
    for(int i = 1;i <= n; i++){
        //receber os valores de a b c
        //printf("Digite 3 valores:\n");
        scanf("%d %d %d", &a, &b, &c);

        //colocar em ordem crescente
        if(a >= b && a >= c){
            if(b > c){
                printf("%d %d %d\n",c,b,a);
            }else{
                printf("%d %d %d\n",b,c,a);
            }
        }else if(b >= a && b >= c){
            if(a > c){
                printf("%d %d %d\n",c,a,b);
            }else{
                printf("%d %d %d\n",a,c,b);
            }
        }else if(c >= b && c >= a){
            if(b > a){
                printf("%d %d %d\n",a,b,c);
            }else{
                printf("%d %d %d\n",b,a,c);
            }
        }

    }

}

int main(){
    //Declaração das variáveis
    int n;

    //receber o valor de de n
    //printf("Digite quantos conjuntos:\n");
    scanf("%d", &n);

    ordemcrescente(n);

    return 0;
}