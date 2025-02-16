#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    
    printf("Sequência de Collatz: %d", n);
    
    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        printf(", %d", n);
    }
    
    return 0;
}
