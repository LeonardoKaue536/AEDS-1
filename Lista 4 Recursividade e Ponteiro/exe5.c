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

    return total;
}

int main()
{
    float n;
    
    //printf("Digite o um numero n\n");
    scanf("%f", &n);

    printf("%.2f", serie(n));

    return 0;
}