#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n, k;
	int arr[11] = { 0 };
	int r = 0;

	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	for (int i = n-1; i >= 0; i--){
		if (k == 0) {
			break;
		}
		r += k / arr[i];
		k = k % arr[i];
	}
	printf("%d", r);

	return 0;
}