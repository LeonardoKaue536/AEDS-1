#include <stdio.h>
#include <stdlib.h>

void display(int var, int *ptr){
    
    printf("Conteudo de var = %d\n", var);
    printf("Conteudo apontado por ptr = %d\n", *ptr);
    printf("Endereco apontado por ptr = %p\n", ptr);

}

void update(int *p)
{
    *p = *p+1;
}


int main()
{
    //declaração das variáveis
    int var = 15;
    //ponteiro ptr
    int *ptr;

    //atribuindo o endereço de var no ponteiro ptr
    ptr = &var;

    display(var, ptr);

    update(&var);

    display(var, ptr);

    return 0;
}

/*
    Ponteiros:
    *Ptr : o apontado por, conteúdo do endereço da variável que ptr aponta
     Ptr : o endereço da variável
    &Ptr : o endereço do ponteiro
*/
