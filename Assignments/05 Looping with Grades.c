// Author:		Stanley Wang
// Created:		9/22/11
// Modified:	9/22/11

#include <stdio.h>

#define TOTAL_CUCUMBERS 40
#define TOTAL_GRAPES 50

int main(int argc, char *argv[]) {
	//counting with grapes and cucumbers 
	
	int amountGrapes = 0;
	int amountCucumbers = 0;
	
	while ((amountCucumbers < TOTAL_CUCUMBERS) && (amountGrapes < TOTAL_GRAPES)) {
		amountCucumber++;
		amountGrapes++;
	}
	
	printf("You have %d cucumbers and %d grapes", amountCucumbers, amountGrapes)
	return 0;
}
