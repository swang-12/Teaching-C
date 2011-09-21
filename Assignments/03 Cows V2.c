// Author: 		Stanley Wang
// Created: 	Sept. 19 2011
// Modified: 	Sept. 21 2011

#include <stdio.h>

#define MILK_AMOUNT 10

int cowsToMilk(int amountOfCows);

int main(int argc, char *argv[]) {

	int cowAmount = 0;

	printf("How many cows do you have? ");
	scanf("%d", &cowAmount);

	printf("With %d cows, you will have %d gallons of milk. ", cowAmount, cowsToMilk(cowAmount));

	return 0;
}

int cowsToMilk(int amountOfCows) {
	return (amountOfCows * MILK_AMOUNT);
}