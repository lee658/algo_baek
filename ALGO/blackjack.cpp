#include <stdio.h>
 
int main()
{
    int cardCount, cardLimit;
    scanf("%d %d", &cardCount, &cardLimit);
    int card[cardCount];
    int sum = 0, maxNumber = 0;
    
    for(int i=0; i<cardCount; i++){
        scanf("%d", &card[i]);
    }
 
    for(int i=0; i<cardCount-2; i++){
        for(int j=i+1; j< cardCount-1; j++){
            for(int k=j+1; k< cardCount; k++){
                sum = card[i] + card[j] + card[k];
                if(sum > maxNumber && sum <= cardLimit){
                    maxNumber = sum;
                }
            }
        }
    }
    printf("%d\n", maxNumber);
    
    return 0;
}
