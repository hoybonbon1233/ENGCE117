#include <stdio.h>

float CalculateWinOdds(int Outs) {
    return (float)Outs * 4.0 ;
}

int main() {
    int CardOuts ;
    float WinProbability ;

    //รับค่าจำนวน Outs ตาม Test Case 
    scanf("%d", &CardOuts) ;

    WinProbability = CalculateWinOdds(CardOuts) ;

    printf("\n--- POKER PROBABILITY REPORT (2 Cards Remaining) ---\n") ;
    printf("Calculated Outs: %d\n", CardOuts) ;
    printf("Win Probability (Odds x 4): %.2f%%\n", WinProbability) ;

    printf("Assessment: ") ;

    if (WinProbability >= 30.0) {
        printf("HIGH Win Probability\n") ;
    } else {
        printf("LOW Win Probability\n") ;
    }

    return 0 ;
}