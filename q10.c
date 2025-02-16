#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;
    int i = 1;
    float soma = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O valor de n deve ser maior que 0.\n");
        return 1;
    }

    while (i <= n) {
        soma += 1.0 / i;
        i++;
    }

    printf("A soma dos primeiros %d termos da série harmônica é: %.6f\n", n, soma);

    return 0;
}
