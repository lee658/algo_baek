#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[100001] = { 0 };
int x[100001] = { 0 };
int y[100001] = { 0 };

int main() {
	int n, m, r = 0;
	scanf("%d %d", &n, &m);
	
	for (int i = 1; i <= n ; i++){
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i <= m; i++){
		scanf("%d %d", &x[i], &y[i]);
	}

	for (int i = 1; i <= m; i++){
		int tmp = x[i];
		for (int j = tmp; j <= y[i]; j++){
			r += arr[j];
		}
		printf("%d\n", r);
		r = 0;
	}

	return 0;
}