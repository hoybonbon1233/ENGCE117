#include <stdio.h>

struct student {
	char name[20] ;
	int age ;
	char sex ;
	float gpa ; 
};

struct student upgrade( struct student Child ) {
	if ( Child.sex == 'M' ) {
		Child.gpa = Child.gpa * 1.10f ;
	} else if ( Child.sex == 'F' ) {
		Child.gpa = Child.gpa * 1.20f ;
		if (Child.gpa > 4.0f) Child.gpa = 4.0f ;
	}
	return Child ;
}

int main(void) {
	struct student Aboy ;
	Aboy.sex = 'M' ;
	Aboy.gpa = 3.00f ;
	Aboy = upgrade(Aboy) ;
	printf("%.2f\n", Aboy.gpa) ;
	return 0 ;
}

