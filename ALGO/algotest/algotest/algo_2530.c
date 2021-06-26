#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int h, m, s, p, tmp = 0;
	
	scanf("%d %d %d", &h, &m, &s);
	scanf("%d", &p);

	s += p; tmp = s; s = s % 60;
	m += tmp / 60; tmp = m; m = m % 60;
	h += tmp / 60;
	

	if (h >= 24){
		h = h % 24;
	}

	printf("%d %d %d", h, m, s);


	return 0;
}