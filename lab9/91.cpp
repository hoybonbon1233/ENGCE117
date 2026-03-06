#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

class LinkedList {
    protected :
        struct studentNode *start, **now ;
    public :
        LinkedList() ;
        ~LinkedList() ;
        void InsNode( char n[], int a, char s, float g ) ;
        void DelNode() ;
        void GoNext() ;
        void GoFirst() ;
        void GoLast() ;
        void ShowAll() ;
        int FindNode( char n[] ) ;
        struct studentNode *NowNode() ;
        void EditNode( char n[], int a, char s, float g ) ;
} ;

LinkedList::LinkedList() {
    start = NULL ;
    now = &start ;
}

LinkedList::~LinkedList() {
    struct studentNode *tmp = start ;
    while( tmp != NULL ) {
        struct studentNode *next = tmp->next ;
        free( tmp ) ;
        tmp = next ;
    }
}

void LinkedList::InsNode( char n[], int a, char s, float g ) {
    GoLast() ;
    struct studentNode *newNode = (struct studentNode *)malloc( sizeof( struct studentNode ) ) ;
    strcpy( newNode->name, n ) ;
    newNode->age = a ;
    newNode->sex = s ;
    newNode->gpa = g ;
    newNode->next = NULL ;
    *now = newNode ;
}

void LinkedList::DelNode() {
    if( *now != NULL ) {
        struct studentNode *tmp = *now ;
        *now = tmp->next ;
        free( tmp ) ;
    }
}

void LinkedList::GoFirst() {
    now = &start ;
}

void LinkedList::GoNext() {
    if( *now != NULL ) {
        now = &( (*now)->next ) ;
    }
}

void LinkedList::GoLast() {
    GoFirst() ;
    while( *now != NULL ) {
        GoNext() ;
    }
}

void LinkedList::ShowAll() {
    struct studentNode *tmp = start ;
    while( tmp != NULL ) {
        printf( "Name: %s, Age: %d, Sex: %c, GPA: %.2f\n", tmp->name, tmp->age, tmp->sex, tmp->gpa ) ;
        tmp = tmp->next ;
    }
}

int LinkedList::FindNode( char n[] ) {
    GoFirst() ;
    while( *now != NULL ) {
        if( strcmp( (*now)->name, n ) == 0 ) {
            return 1 ;
        }
        GoNext() ;
    }
    return 0 ;
}

struct studentNode *LinkedList::NowNode() {
    if( *now != NULL ) {
        return *now ;
    }
    return NULL ;
}

void LinkedList::EditNode( char n[], int a, char s, float g ) {
    if( *now != NULL ) {
        strcpy( (*now)->name, n ) ;
        (*now)->age = a ;
        (*now)->sex = s ;
        (*now)->gpa = g ;
    }
}

void EditData( LinkedList *ll ) {
    char n[ 20 ] ;
    int a ;
    char s ;
    float g ;
    printf( "Enter name to edit: " ) ;
    scanf( "%19s", n ) ;
    if( ll->FindNode( n ) ) {
        printf( "Enter new name: " ) ;
        scanf( "%19s", n ) ;
        printf( "Enter new age: " ) ;
        scanf( "%d", &a ) ;
        printf( "Enter new sex (M/F): " ) ;
        scanf( " %c", &s ) ;
        printf( "Enter new GPA: " ) ;
        scanf( "%f", &g ) ;
        ll->EditNode( n, a, s, g ) ;
        printf( "Edit successful\n" ) ;
    } else {
        printf( "Not found\n" ) ;
    }
}

void AddData( LinkedList *ll ) {
    char n[ 20 ] ;
    int a ;
    char s ;
    float g ;
    printf( "Enter name: " ) ;
    scanf( "%19s", n ) ;
    printf( "Enter age: " ) ;
    scanf( "%d", &a ) ;
    printf( "Enter sex (M/F): " ) ;
    scanf( " %c", &s ) ;
    printf( "Enter GPA: " ) ;
    scanf( "%f", &g ) ;
    ll->InsNode( n, a, s, g ) ;
    printf( "Add successful\n" ) ;
}

void FindData( LinkedList *ll ) {
    char n[ 20 ] ;
    printf( "Enter name to find: " ) ;
    scanf( "%19s", n ) ;
    if( ll->FindNode( n ) ) {
        struct studentNode *tmp = ll->NowNode() ;
        printf( "Found -> Name: %s, Age: %d, Sex: %c, GPA: %.2f\n", tmp->name, tmp->age, tmp->sex, tmp->gpa ) ;
    } else {
        printf( "Not found\n" ) ;
    }
}

void readfile( LinkedList *ll ) {
    FILE *fp = fopen( "data.txt", "r" ) ;
    if( fp != NULL ) {
        char n[ 20 ] ;
        int a ;
        char s ;
        float g ;
        while( fscanf( fp, "%19s %d %c %f", n, &a, &s, &g ) == 4 ) {
            ll->InsNode( n, a, s, g ) ;
        }
        fclose( fp ) ;
    }
}

void writefile( LinkedList *ll ) {
    FILE *fp = fopen( "data.txt", "w" ) ;
    if( fp != NULL ) {
        ll->GoFirst() ;
        struct studentNode *tmp = ll->NowNode() ;
        while( tmp != NULL ) {
            fprintf( fp, "%s %d %c %f\n", tmp->name, tmp->age, tmp->sex, tmp->gpa ) ;
            ll->GoNext() ;
            tmp = ll->NowNode() ;
        }
        fclose( fp ) ;
    }
}

int main() {
    LinkedList listA ;
    int menu ;
    readfile( &listA ) ;
    printf( "      Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Exit : " ) ;
    scanf( "%d", &menu ) ;
    while( menu != 0 ) {
        switch( menu ) {
            case 1 : AddData( &listA ) ; break ;
            case 2 : EditData( &listA ) ; break ;
            case 3 : 
                {
                    char n[ 20 ] ;
                    printf( "Enter name to delete: " ) ;
                    scanf( "%19s", n ) ;
                    if( listA.FindNode( n ) ) {
                        listA.DelNode() ;
                        printf( "Delete successful\n" ) ;
                    } else {
                        printf( "Not found\n" ) ;
                    }
                } 
                break ;
            case 4 : FindData( &listA ) ; break ;
            case 5 : listA.ShowAll() ; break ;
        }
        printf( "      Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Exit : " ) ;
        scanf( "%d", &menu ) ;
    }
    writefile( &listA ) ;
    return 0 ;
}