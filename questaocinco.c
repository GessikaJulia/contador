#include <stdio.h>

void resistorColors(int resistance) {
    char *colorCodes[] = {
        "Preto", "Marrom", "Vermelho", "Laranja",
        "Amarelo", "Verde", "Azul", "Violeta", 
        "Cinza", "Branco"
    };
    
    int digits[3];
    int count = 0;
    
    while (resistance > 0 && count < 3) {
        digits[count] = resistance % 10;
        resistance /= 10;
        count++;
    }
    
    printf("Faixa de cores:\n");
    
    if (count == 3) {
        printf("%s %s %s\n", colorCodes[digits[2]], colorCodes[digits[1]], colorCodes[digits[0]]);
    } else if (count == 2) {
        printf("%s %s\n", colorCodes[digits[1]], colorCodes[digits[0]]);
    } else if (count == 1) {
        printf("%s\n", colorCodes[digits[0]]);
    } else {
        printf("Valor de resistência inválido.\n");
    }
}

int main() {
    int resistance;
    
    printf("Informe o valor da resistência: ");
    scanf("%d", &resistance);
    
    resistorColors(resistance);
    
    return 0;
}
