#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct StudentNode {
    char Name[ 20 ] ;
    int Age ;
    char Sex ;
    float Gpa ;
    struct StudentNode *Next ;
} ;

void SaveNode( struct StudentNode *Child, char N[], int A, char S, float G ) ;
void GoNext1( struct StudentNode **Walk ) ;

int main() {
    struct StudentNode *Start, *Now1, **Now2 ;

    Start = ( struct StudentNode * ) malloc( sizeof( struct StudentNode ) ) ;
    SaveNode( Start, "one", 6, 'M', 3.11 ) ;

    Start->Next = ( struct StudentNode * ) malloc( sizeof( struct StudentNode ) ) ;
    SaveNode( Start->Next, "two", 8, 'F', 3.22 ) ;

    Start->Next->Next = ( struct StudentNode * ) malloc( sizeof( struct StudentNode ) ) ;
    SaveNode( Start->Next->Next, "three", 10, 'M', 3.33 ) ;

    Start->Next->Next->Next = ( struct StudentNode * ) malloc( sizeof( struct StudentNode ) ) ;
    SaveNode( Start->Next->Next->Next, "four", 12, 'F', 3.44 ) ;
    Start->Next->Next->Next->Next = NULL ;

    Now1 = Start ;
    Now2 = &Now1 ;

    GoNext1( Now2 ) ;

    printf( "%s\n", Now1->Name ) ;

    return 0 ;
}

void SaveNode( struct StudentNode *Child, char N[], int A, char S, float G ) {
    strcpy( Child->Name, N ) ;
    Child->Age = A ;
    Child->Sex = S ;
    Child->Gpa = G ;
    Child->Next = NULL ;
}

void GoNext1( struct StudentNode **Walk ) {
    if ( *Walk != NULL && ( *Walk )->Next != NULL ) {
        *Walk = ( *Walk )->Next ;
    }
}