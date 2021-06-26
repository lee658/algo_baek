#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	char r[101];
	long long a, b, c, d;
	long long i, j;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

	sprintf(r, "%lld%lld %lld%lld", a,b,c,d);
	sscanf(r, "%lld %lld", &i, &j);

	printf("%lld", i + j);
	return 0;
}