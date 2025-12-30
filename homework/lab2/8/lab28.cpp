#include <stdio.h>

int main() {
    int N ;
    int I ;
    int StudentId ;
    int Score ;
    int TotalClasses ;
    int AbsentClasses ;
    float AttendancePercent ;
    int PassCount = 0 ;
    int FailCount = 0 ;

    if (scanf("%d", &N) != 1) {
        return 1 ;
    }

    for (I = 0 ; I < N ; I++) {
        if (scanf("%d %d %d %d", &StudentId, &Score, &TotalClasses, &AbsentClasses) != 4) {
            break ;
        }

        AttendancePercent = (float)(TotalClasses - AbsentClasses) / TotalClasses * 100.0 ;

        if (Score >= 50 && AttendancePercent >= 75.0) {
            printf("%d: PASS\n", StudentId) ;
            PassCount++ ;
        } else {
            printf("%d: FAIL (", StudentId) ;
            
            if (Score < 50 && AttendancePercent < 75.0) {
                printf("Both Score and Attendance") ;
            } else if (Score < 50) {
                printf("Score") ;
            } else {
                printf("Attendance") ;
            }
            
            printf(")\n") ;
            FailCount++ ;
        }
    }

    printf("\n--- Summary ---\n") ;
    printf("Total PASS: %d\n", PassCount) ;
    printf("Total FAIL: %d\n", FailCount) ;

    return 0 ;
}