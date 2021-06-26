#include <stdio.h>

struct Node{
	int data;
	int* address;
};

int linklist(int data){
	struct Node node;

	node.data = data;
	node.address = data;
	return node.data;
}

int main() {
	int s;
	s = linklist(1);
	printf("%d", s);




}