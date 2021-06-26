#include <stdio.h>

int main() {
	int a;
	scanf_s("%d", &a);

	for (int i = 0; i < a ; i++) {
		for (int e = 1; e < a-i; e++){
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}