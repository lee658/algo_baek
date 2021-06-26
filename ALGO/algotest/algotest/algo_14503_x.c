#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ºÏ = ¼­(x + 1),  ¼­ = ³²( y -1 ), ³² = µ¿(x -1 ), µ¿ = ºÏ( y + 1 )



int main() {
	int n, m, d, x, y;
	int map[50][50];
	int cnt = 0;
	scanf("%d %d", &n, &m);
	scanf("%d %d %d", &x, &y, &d);
	
	for (int i = 1; i <= n ; i++){
		for (int j = 1; j <= m; j++){
			scanf("%d", &map[i][j]);
		}
	}
	map[x][y];
	for (;1;){
		if(map[x][y] == 1){
			map[x][y] = 0;
			cnt++;
		}
		else if(d == 0 && map[x + 1][y] == 0){
			x += 1;
			cnt++;
			d = 1;
			continue;
		}else if(d == 1 && map[x][y -1] == 0){
			y -= 1;
			cnt++;
			map[x][y] = 0;
			d = 2;
			continue;
		}else if(d == 2 && map[x - 1][y] == 0){
			x -= 1;
			cnt++;
			map[x][y] = 0;
			d = 3;
			continue;
		}else if(d == 3 && map[x][y + 1] == 0){
			y += 1;
			cnt++;
			map[x][y] = 0;
			d = 0;
			continue;
		}
		else if(d == 0 && map[x][y - 1] == 0 && map[x][y - 2]== 0){
			y -= 2;
			continue;
		}else if(d == 1 && map[x - 1][y] == 0 && map[x -2][y] == 0){
			x -= 2;
			continue;
		}else if(d == 2 && map[x][y + 1] == 0 && map[x][y + 2] == 0){
			y += 2;
			continue;
		}else if(d == 3 && map[x + 1][y] == 0 && map[x + 2][y] == 0){
			x += 2;
			continue;
		}
		else{
			break;
		}
		printf("%d", cnt);
	}
	// ºÏ = ¼­(x + 1),  ¼­ = ³²( y -1 ), ³² = µ¿(x -1 ), µ¿ = ºÏ( y + 1 )



	return 0;
}
