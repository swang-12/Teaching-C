// Author:		Stanley Wang
// Created:		9/26/11
// Modified:	9/26/11

#include <stdio.h>

int main (int argc, char *argv[]) {
	// declares numbers and initializes as 0
	int num1 = 0;
	int num2 = 0;
	
	// prints out a message and user inputs number in
	printf("What would you like me to count up to?:");
	scanf("%d", &num2);
	
	//continues counting by 1 until it reaches the input number and prints each number
	while (num1 < num2) {
		++num1;
		printf("%d \n", num1);
	}
	
	return 0;
}