#include <stdio.h>
int arr[5000];

int main() {
	
	int an[5];
	int n, k = 0, a;
	
	scanf_s("%d %d",&n ,&k);

	for (int i = 1; i <= n; i++){
		arr[i] += i;
	}
	printf("<");
	a = n;
	for (k; k <= n; k+= 0) {
		if (a == 1){
			printf("%d", arr[k]);
			printf(">");
			return 0;
		}
		printf("%d, ", arr[k]);
		//arr[k] -= arr[k];
		a =a - 1;
		k = k + k;
		//printf(" k = %d ", k);
		//printf(" n = %d ", n);
		if (k>n){
			k = k - n;
			//printf(" k-n = %d ", k = k - n);
		}
	}
	
}

