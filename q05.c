#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if (num < 0) {
		printf("Entrada inválida. Digite um número maior ou igual 0.");
	} else {
		while (num >= 0) {
			printf("%d \n", num);
			num--;
		}
	}
	return 0;
}
