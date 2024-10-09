#include <stdio.h>

double serie(int n)
{
    double total =  1;
    int fat;
    for(int i = 0;i < n; i++)
    {
        fat = 1;

        for(int j = 1;j <= i; i++)
        {
            fat = fat*j;
        }

        total += 1/fat;

    }

    return total;
}

int main()
{
    int n;
    
    printf("Digite o um numero n\n");
    scanf("%d", &n);

    printf("O resultado eh: %.2lf\n", serie(n));

}