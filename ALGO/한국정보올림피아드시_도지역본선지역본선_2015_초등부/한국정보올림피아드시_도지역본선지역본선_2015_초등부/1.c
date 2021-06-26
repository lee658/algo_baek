#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n;
	int arr[5] = { 0 };
	int a = 0;
	scanf("%d", &n);

	for (int i = 0; i <= 4; i++){
		scanf("%d", &arr[i]);
			if (n == arr[i]) {
				a += 1;
		}
	}
	printf("%d", a);

	return 0;
}