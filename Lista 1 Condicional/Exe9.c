#include <stdio.h>

int main()
{
    //declaração das variáveis
    int codigo;
    float preco;

    //Receber preço
    scanf("%f", &preco);

    //Receber o código
    scanf("%d", &codigo);

    //Tabela de qual procedência
    switch (codigo)
    {
    case 1:
        printf("Sul\n");
        break;
    case 2:
        printf("Norte\n");
        break;
    case 3:
        printf("Leste\n");
        break;
    case 4:
        printf("Oesten\n");
        break;
    case 5:
    case 6:
        printf("Nordeste\n");
        break;
    case 7:
    case 8:
    case 9:
        printf("Sudeste\n");
        break;
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
        printf("Centro-oeste\n");
        break;
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
        printf("Nordeste\n");
        break;

    default:
        break;
    }
    return 0;
}