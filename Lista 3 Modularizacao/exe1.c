#include <stdio.h>

//Calcula a média de alunos
void mediaalunos(int n){
    float n1, n2, n3, media;
    char op;
    for(int i = 1; i <= n; i++){
        //receber as notas dos alunos
        //printf("digite sua nota:\n");
        scanf("%f %f %f %c", &n1, &n2, &n3, &op);
        //Receber a opção de media
        //printf("Digite qual o tipo de media\n");
        //scanf(" %c", &op);

        if(op == 'p' || op == 'P'){
            media = (n1*5 + n2*3 + n3*2) / 10;
        }else if(op == 'A'|| op == 'a'){
            media = (n1 + n2 + n3) / 3;
        }

        printf("%.2f\n", media);
    }
}


int main(){
    // Declaração das variávie1s
    int n;

    //receber a quantidade de alunos
    //printf("quantos alunos serao avaliados\n");
    scanf("%d", &n);

    mediaalunos(n);
}