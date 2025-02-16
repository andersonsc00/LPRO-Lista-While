#include <stdio.h>

int main() {
    float nota, soma = 0;
    int cont = 0;
    
    printf("Informe as notas dos alunos:\n");
    
    while (1) {
        printf("Nota: ");
        scanf("%f", &nota);
        
        if (nota < 0)
            break;
        
        if (nota >= 0 && nota <= 10) {
            soma += nota;
            cont++;
        } else {
            printf("Entrada inválida!\n");
        }
    }
    
    if (cont > 0) {
        printf("Média: %.2f\n", soma / cont);
    }
    
    return 0;
}
