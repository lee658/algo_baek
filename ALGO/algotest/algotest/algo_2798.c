#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n, m, tmp, r, f = 0;
	int ca[100];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++){
		scanf("%d", &tmp);
		ca[i] = tmp;
	}
	
	for (int i = 0;i < n;i++){
		for (int j = i + 1; j < n; j++){
			for (int k = j + 1; k < n;k++ ){
				r = ca[i] + ca[j] + ca[k];
				if ( r <= m && r >= f){
					f = r;
				}
			}
		}
	}
	printf("%d", f);
	return 0;
}