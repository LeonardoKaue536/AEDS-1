#include <stdio.h>

int main() {
    FILE *fp;
    char nome[50];
    int idade;

    fp = fopen("dados.txt", "a");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    fprintf(fp, "Nome: %s\nIdade: %d\n", nome, idade);

    fclose(fp);
    printf("Dados gravados com sucesso!\n");

    return 0;
}