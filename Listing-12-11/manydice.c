// manydice.c -- multiple dice rolls
// compile with diceroll.c

#include <stdio.h>	// for library srand()
#include <stdlib.h>	// for time()
#include <time.h>	// for roll_n_dice()
#include "diceroll.h"	// and for roll_count

int main(void) {

	int dice, roll;
	int sides;

	srand((unsigned int) time(0));
	printf("Enter the number of sides per die (0 to stop): \n");
	while (scanf("%d", &sides) == 1 && sides > 0) {

		printf("How many dice?\n");
		scanf("%d", &dice);
		roll = roll_n_dice(dice, sides);
		printf("You have rolled a %d using %d %d-sided dice.\n",
			roll, dice, sides);
		printf("How many sides? Enter 0 to stop.\n");
	}
	printf("The rollem() function was called %d times.\n",
		roll_count);	// use extern variable
	printf("GOOD FORTUNE TO YOU!\n");
	
	return 0;
}
