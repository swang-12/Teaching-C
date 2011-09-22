// Author:		Stanley
// Created:		9/21/11
// Modified:	9/22/11

#include <stdio.h>

int countFunction1(int amountPineapple, int amountOrange);
int countFunction2(int amountPineapple, int amountOrange);

int main(int argc, char *argv[]) {

	//initializes the amount of pineapples and oranges
	int amountPineapple = 0;
	int amountOrange = 0;
	
	int samePinneppleOrangeAmount = countFunction1(amountPineapple, amountOrange);
	//prints the amount of pineapples and oranges
	printf("You have %d pineapples and oranges\n", samePinneppleOrangeAmount);
	
	return 0;

}

int countFunction1(amountPineapple, amountOrange) {

	if (amountPineapple < 10) {
		// goes to 2nd function and adds one pineapple
		return countFunction2(amountPineapple + 1, amountOrange);
	
	}
	
	return amountPineapple;

}

int countFunction2(amountPineapple, amountOrange) {
		
	if (amountOrange < 5) {
		//goes to 1st function and adds one orange
		return countFunction1(amountPineapple, amountOrange + 1);
	
	}
	
	return amountOrange;

}