#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
const int REPEATED = 36000;
 
int main(void) {
    int i, arr[11] = {0, };
 
    srand(time(NULL));
    for (i = 1; i <= REPEATED; i++) {
        arr[rand() % 6 + rand() % 6]++;
    }
 
    printf("Output : \n\n");
    for (i=0; i<11; i++) {
        printf("%2d : %4d (%f)\n", 2+i, arr[i], (float)arr[i] / REPEATED);
    }
 
    return 0;
}


