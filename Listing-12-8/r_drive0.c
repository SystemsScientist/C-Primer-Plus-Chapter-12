// r_drive0.c -- test the rand0() function
// compile with rand0.c

#include <stdio.h>

extern int rand0(void);

int main(void) {

	int count;

	for (count = 0; count < 5; count++) // increments
		printf("%hd \n", rand0());  // calls rand0() function

	return 0;
}
