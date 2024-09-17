#include <stdio.h>

void mediaalunos(int alu){
    //Declaração das variáveis
    float nota;
    
    for(int i = 0; i < alu; i++){
        printf("Digite a media final do aluno:\n");
        scanf("%f", &nota);

        if(nota <= 39){
            printf("F\n");
        }else if(nota <= 59){
            printf("E\n");
        }else if(nota <= 69){
            printf("D\n");
        }else if(nota <= 79){
            printf("C\n");
        }else if(nota <= 89){
            printf("B\n");
        }else{
            printf("A\n");
        }
    }
}

 int main()
 {  
    //Declaração das variáveis
    int n;
    //Receber a quantidade de alunos
    printf("Digite a quantidade de alunos:\n");
    scanf("%d", &n);

    //chamada do procedimento
    mediaalunos(n);



    return 0;
 }