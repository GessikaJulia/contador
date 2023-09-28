#include <stdio.h>
#include <math.h>

// Função para verificar se um número é uma potência de 2
int ehPotenciaDeDois(int n) {
    return (n & (n - 1)) == 0;
}

int main() {
    int opcao;

    printf("Escolha uma opção:\n");
    printf("1. Informar o número de bits e obter módulo e número máximo.\n");
    printf("2. Informar o módulo e obter a quantidade de bits.\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        int numBits;
        printf("Informe o número de bits: ");
        scanf("%d", &numBits);

        if (!ehPotenciaDeDois(numBits)) {
            printf("O número de bits deve ser uma potência de 2.\n");
            return 1;
        }

        int modulo = pow(2, numBits);
        int numeroMaximo = modulo - 1;

        printf("Módulo: %d\n", modulo);
        printf("Número máximo contabilizado: %d\n", numeroMaximo);
    } else if (opcao == 2) {
        int modulo;
        printf("Informe o módulo: ");
        scanf("%d", &modulo);

        if (!ehPotenciaDeDois(modulo)) {
            printf("O módulo deve ser uma potência de 2.\n");
            return 1;
        }

        int numBits = log2(modulo);

        printf("Quantidade de bits: %d\n", numBits);
    } else {
        printf("Opção inválida.\n");
        return 1;
    }

    return 0;
}
