#include <stdio.h>

//função para calcular a media do salário
void mediasal(){
    float sal = 0, media = 0, conte = 0;

    while(sal >= 0){
        if(sal != -1){
            printf("digite seu salario:\n");
            scanf("%f", &sal);
        
            media += sal;
            conte++;
        }
    }
    media = media / conte;

    printf("A media de salario eh %.2f", media);
}

int main(){
    mediasal();

    return 0;
}