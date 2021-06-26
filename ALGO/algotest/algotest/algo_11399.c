#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int a;
	int arr[1002];
	int arr1 = 0;
	int r = 0;

	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf("%d", &arr[i]);		
	}
	
	for (int i = 0; i < a; i++){
		for (int j = 0; j < a-(i+1); j++){
			if (arr[j] > arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = tmp;
			}
		}
	}
	
	for (int i = 0; i < a; i++){
		arr1 += arr[i];
		r += arr1;
	}

	printf("%d", r);

	return 0;
}