#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];
    int line_count = 0;

    // Abre o arquivo (substitua "arquivo.txt" pelo nome do seu arquivo)
    file = fopen("arq1.txt", "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    // Lê cada linha e conta
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        line_count++;
    }

    // Fecha o arquivo
    fclose(file);

    // Exibe o número de linhas
    printf("O arquivo contem %d linhas.\n", line_count);

    return 0;
}
