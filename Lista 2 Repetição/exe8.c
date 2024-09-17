#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração das variáveis
    int n, total = 0, num = 0, num2 = 1 ;

    //receber o valor de n
    scanf("%d", &n);
    //printar o 1
    printf("1 ");

    //Repetição de  n vezes
    for(int i = 1; i < n; i++){
        //calculo de fibonacci
        
        total = num + num2;
        num = num2;
        num2 = total;

        if(total < n){
         printf("%d ", total);
        }
        
    }
    
    
    return 0;
}