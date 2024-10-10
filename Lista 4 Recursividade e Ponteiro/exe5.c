#include <stdio.h>

//faz o fatorial de maneira recursiva
double fatorial(int i)
{
    //caso base
    if(i == 1) return 1;
    //realiza o fatorial
    else if(i >= 1){
        return i * fatorial(i-1);
    }
}

//faz a soma total
double serie(int n)
{
    //declaração das variáveis
    double total = 0;

    //faz a conta do total
    for(int i = 1; i <= n; i++){
        //chama a função recusiva para fazer o fatorial e adicionar ao total
        total += 1/fatorial(i);
    }

    //Retorna o total para main
    return total;
}

int main()
{
    //declaração das variáveis
    int n;
    

    //receber n números
    scanf("%d", &n);

    //Mostra o resultado na tela
    printf("O resultado eh: %.2lf\n", serie(n));

}