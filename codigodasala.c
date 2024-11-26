#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** ler_arquivo(char *nome_arquivo) {
    FILE *arq = fopen(nome_arquivo, "r");
    if (arq == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(1);
    }

    // Contar o número de linhas
    int num_linhas = 0;
    char c;
    while ((c = fgetc(arq)) != EOF) {
        if (c == '\n') {
            num_linhas++;
        }
    }
    rewind(arq);

    // Alocar memória para o array de strings
    char **nomes = (char**)malloc(num_linhas * sizeof(char*));
    if (nomes == NULL) {
        perror("Erro ao alocar memória");
        exit(1);
    }

    // Ler cada linha e armazenar no array
    int i = 0;
    while (fgets(nomes[i], 100, arq) != NULL) {
        nomes[i][strcspn(nomes[i], "\n")] = 0; // Remover o '\n' do final da linha
        i++;
    }

    fclose(arq);
    return nomes;
}

void ordena(char **nomes, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                char *temp = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = temp;
            }
        }
    }
}

int main() {
    char nome_arquivo[80];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_arquivo);

    char **nomes = ler_arquivo(nome_arquivo);
    int num_nomes = sizeof(nomes) / sizeof(nomes[0]);

    ordena(nomes, num_nomes);

    for (int i = 0; i < num_nomes; i++) {
        printf("%s\n", nomes[i]);
    }

    // Liberar a memória alocada
    for (int i = 0; i < num_nomes; i++) {
        free(nomes[i]);
    }
    free(nomes);

    return 0;
}