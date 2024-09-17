#include <stdio.h>

int main()
{
    //declaração das variáveis
    int a, b ,c;

    //Receber os números
    scanf("%d %d %d", &a, &b, &c);

    //Descobrir qual o maior
    if(a > b && a > c){
        printf("%d",a);
    }else if(b > a && b > c){
        printf("%d", b);
    }else{
        printf("%d", c);
    }
    return 0;
}