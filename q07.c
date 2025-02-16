#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, resto;
	int r1, r2;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &n2);
	
	r1 = n1;
	r2 = n2;
	
	while (n2 != 0) {
		resto = n1 % n2;
		n1 = n2;
		n2 = resto;
	}
	
	printf("O MDC de %d e %d é %d \n", r1, r2, n1);
	
	return 0;
}
