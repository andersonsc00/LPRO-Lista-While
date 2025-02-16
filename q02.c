#include <stdio.h>

int main() {
    int senha_correta = 1234;
    int senha_usuario;

    while (1) {
        printf("Digite a senha: ");
        scanf("%d", &senha_usuario);

        if (senha_usuario == senha_correta) {
            printf("Acesso permitido\n");
            break;
        } else {
            printf("Acesso negado. Por favor, tente novamente:\n");
        }
    }

    return 0;
}
