#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float altura_chico = 1.70;
    float altura_juca = 1.10;
    int anos = 0;

    while (altura_juca <= altura_chico) {
        altura_chico += 0.02;
        altura_juca += 0.03;
        anos++;
    }

    printf("%d anos serão necessários para que Juca seja maior que Chico.\n", anos);

    return 0;
}
