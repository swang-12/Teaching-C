// Author:		Stanley
// Created:		9/21/11
// Modified:	9/21/11

#include <stdio.h>

int countFunction1(amountPineapple, amountOrange);
int countFunction2(amountPineapple, amountOrange);

int main(int argc, char *argv[]) {

	int amountPineapple = 0;
	int amountOrange = 0;
	
	int samePinneppleOrangeAmount = countFunction1(amountPineapple, amountOrange);

	printf("You have %d pineapples and oranges", amountPineapplse);
	
	return 0;

}

int countFunction1(amountPineapple, amountOrange) {

	if (amountPineapple < 10) {

		return countFunction2(amountPineapple + 1, amountOrange);
	
	}
	
	return amountPineapple;

}

int countFunction2(amountPineapple, amountOrange) {

	if (amountOrange < 5) {
	
		return countFunction1(amountPineapple, amountOrange + 1);
	
	}

	return amountPineapple;

}