#include <stdio.h>
double fatorial(int i)
{
    if(i == 1) return 1;
    else if(i >= 1){
        return i * fatorial(i-1);
    }
}

double serie(int n)
{
    //declaração das variáveis
    double total = 0;

    for(int i = 1; i <= n; i++){
        total += 1/fatorial(i);
    }


    return total;
}

int main()
{
    //declaração das variáveis
    int n;
    

    //receber n números
    scanf("%d", &n);

    printf("O resultado eh: %.2lf\n", serie(n));

}