#include <stdio.h>

//função para calcular a media do salário
void mediasal(){
    float sal = 0, media = 0, conte = 0;
    int filho = 0;

    while(sal >= 0){
            //printf("digite seu salario:\n");
            scanf("%f", &sal);
            //degite a qauntidade de filhos
            scanf("%d", &filho);
        if(sal != -1){
            media += sal;
            conte++;
        }
    }
    media = media / conte;

    printf("%.2f", media);
}

int main(){
    mediasal();

    return 0;
}