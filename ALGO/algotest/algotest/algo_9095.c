#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int s(int i) {
	if (i == 1){
		return 1;
	}
	if (i == 2){
		return 2;
	}
	if (i == 3) {
		return 4;
	}
	if (i > 3 ) {
		return s(i - 1) + s(i - 2) + s(i - 3);
	}
	
}

int main() {
	int c = 0, p = 0;
	
	scanf("%d", &p);

	for (int i = 0; i < p; i++){
		int u;
		scanf("%d", &u);
		printf("%d\n", s(u));
	
		}
	return 0;
}