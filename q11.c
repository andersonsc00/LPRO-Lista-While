#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int decimal;
    int binario[32];
    int i = 0;

    printf("Informe um número decimal: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("O número binário é: 0\n");
        return 0;
    }

    while (decimal > 0) {
        binario[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("O número binário é: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}
