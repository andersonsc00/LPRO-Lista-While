#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num, tentativa;
    
    srand(time(NULL));
    num = (rand() % 100) + 1;
    
    while (1) {
        printf("Advinhe um número de 1 a 100:  ");
        scanf("%d", &tentativa);
        
        if (tentativa < 1 || tentativa > 100) {
            printf("Entrada inválida, digite um número entre 1 e 100: \n");
            continue;
        }
        
        if (tentativa == num) {
            printf("Parabéns! Você acertou.\n");
            break;
        } else if (tentativa < num) {
            printf("O número correto é maior. Tente novamente: \n");
        } else {
            printf("O número correto é menor. Tente novamente: \n");
        }
    }
    
    return 0;
}
