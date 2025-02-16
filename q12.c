#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero, soma = 0, ultimo_digito;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero;
    }

    while (numero > 0) {
        ultimo_digito = numero % 10;
        soma += ultimo_digito;
        numero = numero / 10;
    }

    printf("A soma dos dígitos é: %d\n", soma);

    return 0;
}
