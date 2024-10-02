#include <stdio.h>

// Função recursiva para calcular a divisão usando subtrações sucessivas
int divisao(int numerador, int denominador) {
    // Caso base: se o numerador for menor que o denominador, a divisão é 0
    if (numerador < denominador) {
        return 0;
    }
    // Caso recursivo: subtrai o denominador do numerador e conta 1 para a divisão
    return 1 + divisao(numerador - denominador, denominador);
}

int main() {
    int numerador, denominador;

    // Lê os números do usuário
    printf("Digite o numerador e o denominador: ");
    scanf("%d %d", &numerador, &denominador);

    // Chama a função de divisão e exibe o resultado
    int resultado = divisao(numerador, denominador);
    printf("Resultado da divisão: %d\n", resultado);

    return 0;
}
