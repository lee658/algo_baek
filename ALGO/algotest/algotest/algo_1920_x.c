#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr1[100000];
int arr2[100000];

int main() {
	int n, m, r= 0;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &arr1[i]);
	}
	printf("%d", sizeof(arr1) / sizeof(int));
	scanf("%d", &m);
	for (int i = 0; i < m; i++){
		scanf("%d", &arr2[i]);
	}

	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++)	{
			if (arr1[j] == arr2[i]) {
				r++;
				break;
			}
		}
		if (r >= 1) {
			printf("1\n");
			r = 0;
		}
		else if (r == 0) {
			printf("0\n");
		}
	}

	return 0;
}