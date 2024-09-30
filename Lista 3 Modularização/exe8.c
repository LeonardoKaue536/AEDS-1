#include <stdio.h>
int numerador(int n){
    //declaração das variáveis
    int nume = 0;
    //cálculo do numerador
    for(int i = 1; i >= n; i++){
        nume += (i + 1);
    }
    return nume;
}

int denominador(int n){
    //declaração das variáveis
    int deno = 0;
    //cálculo do denominador
    for(int i = 1; i >= n; i++){
        deno += (i + 3);
    }

    return deno;
}
float calculo(int n){
    //declaração das variáveis
    float s;
    s = numerador(n)/denominador(n);


    return s;
}

int main(){
    //declaração das variáveis
    int n;

    //receber um valor n
    printf("Digite um valor N:\n");
    scanf("%d", &n);

    printf("O valor é:%f\n", calculo(n));
    
    return 0;
}