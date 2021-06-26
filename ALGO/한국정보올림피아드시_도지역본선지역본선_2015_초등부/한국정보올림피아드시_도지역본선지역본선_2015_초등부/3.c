#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	char n[100001];
	int a = 0;
	int cnt = 0;

	scanf("%s", &n);
	
	for (int i = 0; i <= 100000; i++){
		if (n[i] =='(' && n[i+1] == ')'){
			n[i] = 'r';
			n[i + 1] = NULL;
		}
	}

	for (int i = 0; i <= 100000; i++){
		if (n[i] == '(') {
			cnt += 1;
		}
		else if(n[i] == 'r'){
			a += cnt * 2;
			cnt = 0;
		}
	}

	printf("%d", a);

	return 0;
}