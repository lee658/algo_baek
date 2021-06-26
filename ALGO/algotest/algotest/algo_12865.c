#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, k;
int g[101] = { 0 };
int v[100001] = { 0 };
int arr[101][100001] = { 0 };

int m(int x, int y) {
	return x > y ? x : y;
}

int main() {

	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++){
		scanf("%d %d", &g[i], &v[i]);
	}

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= k; j++){
			if (j - g[i] >= 0) {
				arr[i][j] = m(arr[i - 1][j], 
								arr[i - 1][j - g[i]] + v[i]);
			}	
			else{
				arr[i][j] = arr[i - 1][j];
			}
		}
	}
	/*printf("\n");
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= k;j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}*/


	printf("%d", arr[n][k]);

	return 0;
}