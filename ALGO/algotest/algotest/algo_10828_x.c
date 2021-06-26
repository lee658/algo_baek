#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n;
	scanf("%d", &n);
	char cd[10000] = { 0 } ;
	for (int i = 0; i <= n; i++){
		scanf("s", &cd);
	}
	printf("%s", cd[1]);
	printf("%s", cd[2]);



	return 0;
}