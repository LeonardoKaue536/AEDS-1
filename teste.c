#include <stdio.h>
#include <time.h>
#include <stdlib.h>

<<<<<<< Updated upstream
int main()
{

    // Decalração de variáveis
    int op1, op2, num[12], origem[12], destino[12],
    lugares[12], sair = 0, aux;

    //ler as entradas
    srand(time(NULL));
    printf("Digite nessa ordem:\n");
    for(int i = 0; i < 3; i++)
    {
        printf("Voo:\n");
        scanf("%d", &num[i]);
        printf("Origem:\n");
        scanf("%d", &origem[i]);
        printf("Destino:\n");
        scanf("%d", &destino[i]);
        printf("Lugares:\n");
        scanf("%d", &lugares[i]);
    }
   
    // Mostrar as primeiras opções do menu
    while (sair == 0)
    {
        //system("cls");
        printf("Escolha umas das opcoes:\n");
        printf("1 - Consultar\n");
        printf("2 - Efetuar reserva\n");
        printf("3 - Sair\n");
        scanf("%d", &op1);

        switch (op1)
        {
        case 1:
            system("cls");
            printf("Escolha:\n");
            printf("1 - Por numero do voo\n");
            printf("2 - por origem\n");
            printf("3 - por destino\n");
            scanf("%d", &op2);            

            switch (op2)
            {
            case 1:
                printf("Digite o numero do voo:\n");
                scanf("%d", &aux);
                for(int i = 0; i < 3;  i++){
                    if(num[i] == aux)
                    {   
                        printf("Numero do voo %d\n", num[i]);
                        printf("Origem %d\n", origem[i]);
                        printf("Destino %d\n", destino[i]);
                        printf("Lugares %d\n", lugares[i]);
                    }
                }
                break;
            case 2:
                printf("Digite a origem:\n");
                scanf("%d", &aux);
                for(int i = 0; i < 3;  i++){
                    if(origem[i] == aux)
                    {   
                        printf("Numero do voo %d\n", num[i]);
                        printf("Origem %d\n", origem[i]);
                        printf("Destino %d\n", destino[i]);
                        printf("Lugares %d\n", lugares[i]);
                    }
                }
                
                break;
            case 3:
                printf("Digite o destino:\n");
                scanf("%d", &aux);
                for(int i = 0; i < 3;  i++){
                    if(destino[i] == aux)
                    {   
                        printf("Numero do voo %d\n", num[i]);
                        printf("Origem %d\n", origem[i]);
                        printf("Destino %d\n", destino[i]);
                        printf("Lugares %d\n", lugares[i]);
                    }
                }
                
                break;
            
            default:
                break;
            }

            
            break;
        case 2:

            break;
        case 3:
            sair = 1;
            break;

        default:
            printf("Opcao invalida\n");
            break;
        }
    }
=======
int main() {
    FILE *arq;
    char caractere;

    // Abre o arquivo para escrita (cria se não existir)
    arq = fopen("arq.txt", "w");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite caracteres (0 para sair):\n");

    // Lê e escreve caracteres até o usuário digitar '0'
    do {
        scanf("%c", &caractere);
        fputc(caractere, arq);
    } while (caractere != '0');

    // Fecha o arquivo
    fclose(arq);

    printf("Dados gravados no arquivo.\n");

>>>>>>> Stashed changes
    return 0;
}