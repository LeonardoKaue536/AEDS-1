#include <stdio.h>

int main() {
    FILE *fp;
    char linha[100];

    fp = fopen("dados.txt", "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while (fgets(linha, 100, fp) != NULL) {
        printf("%s", linha);
    }

    fclose(fp);

    return 0;
}