#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr1[1000001];
int arr2[1000001];
int c = 0, k = 0;

int min(int x, int y) {
	if (x == 0) {
		k++;
		return y;
	}
	else if(y == 0){
		c++;
		return x;
	}
	else if (x < y) {
		c++;
		return x;
	}
	else{
		k++;
		return y;
	}
}


int main() {
	int n, m, g;
	
	scanf("%d %d", &n, &m);

	g = n + m;

	for (int i = 0; i < n; i++){
		scanf("%d", &arr1[i]);
	}
	
	for (int i = 0; i < m; i++){
		scanf("%d", &arr2[i]);
	}
	for (int i = 0; 1 ; i++) {
		if (arr1[i] == 0) {
			printf("%d ", arr1[i]);
			c++;
			g--;
		}
		if (arr2[i] == 0) {
			printf("%d ", arr2[i]);
			k++;
			g--;
		}
		else{
			break;
		}
	}
	
	
	for (int i = 0; i < g ; i++){
		printf("%d ", min(arr1[c], arr2[k]));
	}
	return 0;

}