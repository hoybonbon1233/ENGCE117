#include <stdio.h>


int data[100];


int *GetSet(int *a) {
    int i; 

    printf("How many number of element?\n");
    scanf("%d", a); 

    printf("Enter element:\n");
    for (i = 0; i < *a; i++) {
        scanf("%d", &data[i]);
    }
    
    return data; 
}

int main() {
    int *data_ptr; 
    int num;
    int i; 

    
    data_ptr = GetSet(&num);

    
    for (i = 0; i < num; i++) {
        printf("%d ", data_ptr[i]);
    }
    
    printf("\n");
    return 0;
}