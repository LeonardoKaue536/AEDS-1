#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int* Multiplica (int *matriz1, int *matriz2, int tam)
{
    int *resp = (int*)malloc (tam*tam*sizeof(int));

    for (int lnResp = 0; lnResp < tam; lnResp++)
    {
        for (int colResp = 0; colResp < tam; colResp++)
        {
            *(resp + lnResp*tam + colResp) = 0;
            for (int elem = 0; elem < tam; elem++)
                *(resp + lnResp*tam + colResp) += *(matriz1 + lnResp*tam + elem)
                                                        *
                                                  *(matriz2 + elem*tam + colResp);
        }
    }
}


int menu()
{
    int opcao;

    printf("Escolha uma opcao\n");
    printf("1 - Definir tamanho da matriz quadrada\n");
    printf("2 - Preencher pelo teclado\n");
    printf("3 - Preencher randomicamente\n");
    printf("4 - Preencher por arquivo fornecido\n");
    printf("5 - Alterar conteudo na posicao\n");
    printf("6 - Exibir conteudo da matriz\n");
    printf("7 - Media de cada coluna\n");
    printf("8 - Media de cada linha\n");
    printf("9 - Soma da diagonal principal\n");
    printf("10 - Maior elemento da diagonal secundaria\n");
    printf("11 - Trocar duas colunas\n");
    printf("12 - Trocar duas linhas\n");
    printf("13 - Exibir vetor\n");
    printf("14 - Sair\n");
    printf("Opcao: ");
    scanf("%d",&opcao);

    return opcao;
}

void preencherTeclado (int *mat, int N)
{
    for (int ln=0; ln < N; ln++)
    {
        printf("Valores da linha %d: ",ln);
        for (int col=0; col < N; col++)
        {
            scanf("%d",mat + ln*N + col);
        }
    }
}

void preencherRandomico (int *dados, int tam)
{
    srand((unsigned)time(NULL));

    for (int col=0; col < tam; col++)
    {
        for (int ln=0; ln < tam; ln++)
        {
            *(dados + ln*tam + col) = rand()%101;
        }
    }
}

void preencherArquivo (int *matriz1, int *matriz2, int N, char *nomeArq)
{
    FILE *arq = fopen(nomeArq,"r");

    int ln = 0, col = 0;

    while(fscanf(arq,"%d",matriz1 + ln*N +col) != EOF)
    {
        if (col < N-1) col++;
        else if (col == N-1 && ln < N-1)
        {
            col = 0;
            ln++;
        }
        else break;
    }

    ln = 0; col = 0;

    while(fscanf(arq,"%d",matriz2 + ln*N +col) != EOF)
    {
        if (col < N-1) col++;
        else if (col == N-1 && ln < N-1)
        {
            col = 0;
            ln++;
        }
        else break;
    }

    fclose(arq);
}

void alterarElemento (int *mat, int N)
{
    int linha, coluna;

    printf("Digite linha e coluna: ");
    scanf("%d%d",&linha,&coluna);
    printf("Novo valor: ");
    scanf("%d",mat + linha*N + coluna);
}

void exibirMatriz (int *m, int N)
{
    for (int i=0; i < N; i++)
    {
        for (int j=0; j < N; j++)
        {
            printf("%3d ",*(m + i*N + j));
        }
        printf("\n");
    }
}

void MediaColuna (int *mat, int *vet, int tam)
{
    int soma;

    for (int col=0; col < tam; col++)
    {
        soma = 0;
        for (int ln=0; ln < tam; ln++)
        {
            soma += *(mat + ln*tam + col);
        }
        *(vet + col) = soma/tam;
    }
}

void MediaLinha (int *mat, int *vet, int tam)
{
    int soma;

    for (int ln=0; ln < tam; ln++)
    {
        soma = 0;
        for (int col=0; col < tam; col++)
        {
            soma += *(mat + ln*tam + col);
        }
        *(vet + ln) = soma/tam;
    }
}

int somaDiagPrinc(int *mat, int tam)
{
    int soma = 0;

    for (int num=0; num < tam; num++)
        soma += *(mat + num*tam + num);

    return soma;
}

int maiorDiagSec(int *mat, int N)
{
    int maior = INT_MIN;

    /*for (int num=0; num < N; num++)
        if( *(mat + num*N + N-num-1) > maior)
            maior = *(mat + num*N + N-num-1);
    */
    int j = N-1;
    for (int i=0; i < N; i++)
    {
        if (*(mat + i*N + j) > maior)
        {
            maior = *(mat + i*N + j);
        }
        j--;
    }

    return maior;
}

void TrocaColunas (int *mat, int N)
{
    int col1, col2, aux;

    printf("Quais colunas deseja trocar (0 a %d)? ",N-1);
    scanf("%d%d",&col1,&col2);

    for (int ln=0; ln < N; ln++)
    {
        aux = *(mat + ln*N + col1);
        *(mat + ln*N + col1) = *(mat + ln*N + col2);
        *(mat + ln*N + col2) = aux;
    }
}

void TrocaLinhas (int *mat, int N)
{
    int ln1, ln2, aux;

    printf("Quais linhas deseja trocar (0 a %d)? ",N-1);
    scanf("%d%d",&ln1,&ln2);

    for (int col=0; col < N; col++)
    {
        aux = *(mat + ln1*N + col);
        *(mat + ln1*N + col) = *(mat + ln2*N + col);
        *(mat + ln2*N + col) = aux;
    }
}

void ExibirVetor (int *vet, int N)
{
    for (int pos=0; pos < N; pos++)
        printf("%3d ",*(vet+pos));
    printf("\n");
}

int main()
{
    int tamanho, *matriz1 = NULL, *matriz2 = NULL, *vetorMedias = NULL, op;
    int numMatriz;
    char *nomeArq = (char*)malloc(30*sizeof(int));

    op = menu();

    while (op != 14)
    {
        switch(op)
        {
            case 1:
                printf("\nTamanho da matriz quadrada: ");
                scanf("%d",&tamanho);
                matriz1 = (int*) malloc(tamanho*tamanho*sizeof(int));
                matriz2 = (int*) malloc(tamanho*tamanho*sizeof(int));
                vetorMedias = (int*) malloc(tamanho*sizeof(int));
                break;
            case 2:
                printf("Qual matriz deseja preencher (1 ou 2)? ");
                scanf("%d",&numMatriz);
                if (numMatriz == 1) preencherTeclado(matriz1,tamanho);
                else preencherTeclado(matriz2,tamanho);
                break;
            case 3:
                printf("Qual matriz deseja preencher (1 ou 2)? ");
                scanf("%d",&numMatriz);
                if (numMatriz == 1) preencherRandomico(matriz1,tamanho);
                else preencherRandomico(matriz2,tamanho);
                break;
            case 4:
                printf("\nNome do arquivo: ");
                scanf(" %[^\n]",nomeArq);
                preencherArquivo(matriz1,matriz2,tamanho,nomeArq);
                break;
            case 5:
                printf("Em qual matriz deseja alterar (1 ou 2)? ");
                scanf("%d",&numMatriz);
                if (numMatriz == 1) alterarElemento (matriz1,tamanho);
                else alterarElemento (matriz2,tamanho);
                break;
            case 6:
                printf("Qual matriz deseja exibir (1 ou 2)? ");
                scanf("%d",&numMatriz);
                if (numMatriz == 1) exibirMatriz (matriz1,tamanho);
                else exibirMatriz (matriz2,tamanho);
                break;
            case 7:
                printf("Qual matriz deseja exibir (1 ou 2)? ");
                scanf("%d",&numMatriz);
                if (numMatriz == 1) MediaColuna(matriz1,vetorMedias,tamanho);
                else MediaColuna(matriz2,vetorMedias,tamanho);
                break;
            case 8:
                printf("Qual matriz deseja exibir (1 ou 2)? ");
                scanf("%d",&numMatriz);
                if (numMatriz == 1) MediaLinha(matriz1,vetorMedias,tamanho);
                else MediaLinha(matriz2,vetorMedias,tamanho);
                break;
            case 9:
                printf("Qual matriz deseja exibir (1 ou 2)? ");
                scanf("%d",&numMatriz);
                if (numMatriz == 1) printf("\nA soma dos elementos da diagonal principal eh %d\n",somaDiagPrinc(matriz1,tamanho));
                else printf("\nA soma dos elementos da diagonal principal eh %d\n",somaDiagPrinc(matriz2,tamanho));
                break;
            case 10:
                printf("Qual matriz deseja exibir (1 ou 2)? ");
                scanf("%d",&numMatriz);
                if (numMatriz == 1) printf("\nO maior elemento da diagonal secundaria eh %d\n",maiorDiagSec(matriz1,tamanho));
                else printf("\nO maior elemento da diagonal secundaria eh %d\n",maiorDiagSec(matriz2,tamanho));
                break;
            case 11:
                printf("Qual matriz deseja exibir (1 ou 2)? ");
                scanf("%d",&numMatriz);
                if (numMatriz == 1) TrocaColunas(matriz1,tamanho);
                else TrocaColunas(matriz2,tamanho);
                break;
            case 12:
                printf("Qual matriz deseja exibir (1 ou 2)? ");
                scanf("%d",&numMatriz);
                if (numMatriz == 1) TrocaLinhas(matriz1,tamanho);
                else TrocaColunas(matriz2,tamanho);
                break;
            case 13:
                ExibirVetor(vetorMedias,tamanho);
                break;
            default:
                printf("\nOpcao invalida\n");
                break;
        }

        op = menu();
    }

    system("cls");
    printf("\nFIM DO PROGRAMA\n");
    return 0;
}


