#include <stdio.h>

float function(float n){
    if(n == 1){
        return 1;
    }else{
        return n*function(n-1);
    }
}

float serie(int n)
{
    float total =  0;
    for(int i = 1;i <= n; i++)
    {

        total += (1/function(i));
    }
}
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

int main()
{
    float n;
    
    //printf("Digite o um numero n\n");
    scanf("%f", &n);

    return 0;
}