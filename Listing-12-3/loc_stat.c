// loc_stat.c -- Using a local static variable

#include <stdio.h>

void trystat(void);

int main(void) {

	int count;

	for (count = 1; count <= 3; count++) {
		printf("Here comes iteration %d: \n", count);
		trystat();
	}

	return 0;
}

void trystat(void) {

	int fade = 1; 	     // fade dissappears with each iteration
	static int stay = 1; // stay remains with each iteration

	printf("fade = %d and stay = %d \n", fade++, stay++);
}
