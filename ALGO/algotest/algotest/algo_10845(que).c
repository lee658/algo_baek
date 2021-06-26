#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int s = 0;
int point = 0;
int poppoint = 1;
int arr[10000000] = { 0 };

void push(int x) {
	point++;
	s++;
	arr[point] = x;
	return printf("%d\n", x);
}

void pop() {
	if (arr[poppoint] == NULL){
		return printf("-1\n");
	}
	printf("%d\n", arr[poppoint]);
	return poppoint++, s--;
}

void size() {
	return printf("%d\n", s);
}

void empty() {
	if (arr[poppoint] == NULL){
		return printf("-1\n");
	}
	return printf("1\n");
}

void front() {
	if (arr[point] == NULL){
		return printf("-1\n");
	}
	return printf("%d\n", arr[point]), point--,s--;
}

void back() {
	if (arr[poppoint] == NULL) {
		return printf("-1\n");
	}
	return printf("%d\n", arr[poppoint]), poppoint--,s--;
}

int main() {
	int n;
	char cmd[6];
	int m;
	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		scanf("%s", &cmd);

		if (cmd[1] == 'u'){
			scanf("%d", &m);
			push(m);
			continue;
		}
		if (cmd[1] == 'o') {
			pop();
			continue;
		}
		if (cmd[1] == 'i'){
			size();
			continue;
		}
		if (cmd[1] == 'm') {
			empty();
			continue;
		}
		if (cmd[1] == 'r') {
			front();
			continue;
		}
		if (cmd[1] == 'a') {
			back();
			continue;
		}
	}
	return 0;
}