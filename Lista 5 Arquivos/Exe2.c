#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[100];

    FILE *arq1 = fopen("exe2.txt","w");

    printf("Digita um texto:\n");

    scanf(" %[^\n]", &texto);
    fprintf(arq1, " %s", texto);

    fclose(arq1);

    return 0;
}