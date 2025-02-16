#include <stdio.h>

int main () {
	int n, j, primo;
	
	printf("Informe um valor: \n");
	scanf("%d", &n);
	
	for(int i=2; i<=n; i++) {
		primo = 1;
		j = 2;
		while(j * j <= i) {
			if(i % j == 0){
				primo = 0;
				break;
			}
			j++;
		}
		if(primo) {
			printf("%d\n", i);
		}
	}
	
	return 0;
}
