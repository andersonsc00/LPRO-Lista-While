#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int num, soma = 0;
	
	printf("Informe números inteiros: ");
	
	while(1) {
		scanf("%d", &num);
		
		if (num == 0) {
			break;
		}
		
		soma += num;
	}
	
	printf("Soma dos números: %d\n", soma);
	return 0;
}  
