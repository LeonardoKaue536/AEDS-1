#include <stdio.h>

void convertehoras(int total, int *hora, int *min,  int *seg){
    //declaração das variáveis
    int salve;

    salve = total % 3600;
    *hora = total / 3600;
    *min = salve / 60;
    *seg = salve % 60;
}

int main(){
    
    int total, h, m, s;

    //printf("Digite o os segundos\n");
    scanf("%d", &total);

    convertehoras(total, &h ,&m, &s);

    printf("%d:%d:%d", h, m, s);

}