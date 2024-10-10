#include <stdio.h>

// Função que calcula o fatorial de um número
int fatorial(int n) {
    int f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}

// Função que calcula o valor de S conforme a fórmula fornecida
double calcularS(int N) {
    double S = 1.0;  // O primeiro termo já é 1
    for (int i = 1; i <= N; i++) {
        S += 1.0 / fatorial(i);  // Soma os termos 1/i!
    }
    return S;
}

int main() {
    int N;

    // Leitura do valor de N
    printf("Digite um valor inteiro positivo N: ");
    scanf("%d", &N);

    // Verifica se N é positivo
    if (N < 1) {
        printf("N deve ser um número inteiro positivo.\n");
        return 1;  // Encerra o programa com erro
    }

    // Calcula e exibe o resultado
    double resultado = calcularS(N);
    printf("O valor de S para N = %d é: %lf\n", N, resultado);

    return 0;
}
