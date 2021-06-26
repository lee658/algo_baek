#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int map[102][102] = { 0 };
int vmap[102][102] = { 0 };

int main() {
	int x, y;
	int r = 1;
	int sx = 1, sy = 1;

	scanf("%d %d", &x, &y);

	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= y; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	
	while (1){	
		if (sx == x && sy == y) {
			break;
		}
		if (map[sx][sy+1] == 1){
			sy++;
			vmap[sx][sy]++;
			r++;
			continue;
		}
		else if(map[sx+1][sy] == 1){
			sx++;
			vmap[sx][sy]++;
			r++;
			continue;
		}
		else if(map[sx-1][sy] == 1){
			sx--;
			vmap[sx][sy]++;
			r++;
			continue;
		}
		else if(map[sx][sy-1] == 1){
			sy--;
			vmap[sx][sy]++;
			r++;
			continue;
		}
	}

	printf("%d", r);
	return 0;
}