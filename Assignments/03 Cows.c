#include <stdio.h>

#define milkAmount 10

int CowsToMilk(int AmountofCows);

int main(int argc, char *argv[]) {

	int cowAmount;

	printf("How many cows do you have? ");
	scanf("%d", &cowAmount);

	printf("With %d cows, you will have %d gallons of milk. ", cowAmount, CowsToMilk(cowAmount));

	return 0;
}

int CowsToMilk(int AmountofCows) {
	return (AmountofCows * milkAmount);
}