#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int	main() {
	long long a, b, c, pr = 0, i=0, tmp;
	scanf("%d %d %d",&a, &b, &c);
	pr += a ;
	if (b >= c){
		printf("-1");
		return 0;
	}
	i= a / (c - b) + 1;
	printf("%d",i);
	/*for (i;; i++) {
		if (a + b * i < c * i) {
			printf("%lld", i);
			return 0;
		}
		i++;
	}
	*/
	return 0;
}