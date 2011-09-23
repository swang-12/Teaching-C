// Author:		Stanley Wang
// Created:		9/22/11
// Modified:	9/22/11
// counting with grapes and cucumbers 

// include standard input/output as header
#include <stdio.h>

// Caps the total cucumbers and grape amount
#define TOTAL_CUCUMBERS 40
#define TOTAL_GRAPES 50

int main(int argc, char *argv[]) {
	
	// initializes and declares variables
	int amountGrapes = 0;
	int amountCucumbers = 0;

	// checks to see if the amount of cucumbers or amount of grapes is less than the total that was defined
	// keeps on checking until the amount is equal to the defined amount
	while ((amountCucumbers < TOTAL_CUCUMBERS) && (amountGrapes < TOTAL_GRAPES)) {
		// adds one cucumber and then one grape
		amountCucumbers++;
		amountGrapes++;
	}
	
	// prints out a message of when # the cucumber and grape amount will be equal
	printf("You have %d cucumbers and %d grapes", amountCucumbers, amountGrapes);
	return 0;
}
