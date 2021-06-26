#include <stdio.h>


int main() {
	int num, sum =0, tmp = 0;
	int arr1[400], arr2[400];
	scanf("%d", &num);
	for (int i = 1; i <= num; i++){
		scanf("%d", &arr1[i]);
	}
	for (int i = 1; i <= num; i++) {
		scanf("%d", &arr2[i]);
	}

	for (int i = 1; i <= num; i++){
		tmp += arr1[i] * arr2[i];
	}
	if (sum < tmp){
		sum = tmp;
	}


	return 0;
}