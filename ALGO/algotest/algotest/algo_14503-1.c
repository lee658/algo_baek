#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ºÏ = ¼­(x + 1),  ¼­ = ³²( y -1 ), ³² = µ¿(x -1 ), µ¿ = ºÏ( y + 1 )

int main() {
	int n, m, d, x, y;
	int map[50][50];
	int tmp[50][50];
	int cnt = 0;
	scanf("%d %d", &n, &m);
	scanf("%d %d %d", &x, &y, &d);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	for (int i = n, r = 1; r <= n ; i--, r++){
		for (int j = m, l = 1; l <= n; j--, l++) {
			tmp[r][l] = map[i][j];
		}
	}
	/*for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			printf("%d ", tmp[i][j]);
		}
		printf("\n");
	}*/

	tmp[x][y];
	x += 1, y += 1;
	for (; 1;) {
		if (tmp[x][y] == 0){
			cnt++;
			tmp[x][y] = 2;
		}
		else if (d == 0 && (tmp[x + 1][y] == 0)) {
			d = 1;
			x += 1;
			continue;
		}
		else if (d == 1 && tmp[x][y - 1] == 0) {
			y -= 1;
			d = 2;
			continue;
		}
		else if (d == 2 && tmp[x - 1][y] == 0) {
			x -= 1;
			d = 3;
			continue;
		}
		else if (d == 3 && tmp[x][y + 1] == 0) {
			y += 1;
			d = 0;
			continue;
		}
		else if(d == 0 && tmp[x + 1][y] < 0){
			d = 1;
		}
		else if(d == 1 && tmp[x][y - 1] < 0){
			d = 2;
		}
		else if(d == 2 && tmp[x - 1][y] < 0){
			d = 3;
		}
		else if(d == 3 && tmp[x][y + 1] < 0){
			d = 0;
		}
		else if (d == 0 && tmp[x][y - 1] == 0 || tmp[x][y - 1] == 2 && tmp[x][y - 2] == 0) {
			y -= 2;
			continue;
		}
		else if (d == 1 && tmp[x - 1][y] == 0 || tmp[x - 1][y] == 2 && tmp[x - 2][y] == 0) {
			x -= 2;
			continue;
		}
		else if (d == 2 && tmp[x][y + 1] == 0 || tmp[x][y + 1] == 2 && tmp[x][y + 2] == 0) {
			y += 2;
			continue;
		}
		else if (d == 3 && tmp[x + 1][y] == 0 || tmp[x + 1][y] == 2 && tmp[x + 2][y] == 0) {
			x += 2;
			continue;
		}
		else {
			printf("%d", cnt);
			break;
		}
	}
	// ºÏ = ¼­(x + 1),  ¼­ = ³²( y -1 ), ³² = µ¿(x -1 ), µ¿ = ºÏ( y + 1 )

	
	
	return 0;
}
