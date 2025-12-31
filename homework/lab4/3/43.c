#include <stdio.h>

int main() {
    int DailyTemp[7] ;
    int MaxTemp ;
    int I ;

    for (I = 0 ; I < 7 ; I++) {
        scanf("%d", &DailyTemp[I]) ;
    }

    MaxTemp = DailyTemp[0] ;
    for (I = 1 ; I < 7 ; I++) {
        if (DailyTemp[I] > MaxTemp) {
            MaxTemp = DailyTemp[I] ;
        }
    }

    printf("--- DAILY TEMPERATURE REPORT ---\n") ;
    printf("Recorded Temperatures (C):") ;

    for (I = 0 ; I < 7 ; I++) {
        printf(" %d", DailyTemp[I]) ;
    }

    printf("\n") ;
    printf("Maximum Temperature Found: %d C\n", MaxTemp) ;

    if (MaxTemp >= 35) {
        printf("Weather is HOT!\n") ;
    } else {
        printf("Weather is MODERATE.\n") ;
    }

    return 0 ;
}