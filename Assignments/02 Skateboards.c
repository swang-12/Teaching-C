// Include "standard input output"
#include <stdio.h>

// Main function:
int main(int argc, char *argv[]) {
	
	// Declare 2 local variables
	int skateboards;
	int skateboardCost;
	
	// Print to screen, then read value in
	printf("How much does 1 skateboard cost? ");
	scanf("%d", &skateboardCost);
	
	printf("How many skateboards would you like to buy? ");
	scanf("%d", &skateboards);
	
	// Print nice message including final result
	printf("\nThat will cost $%d\n", skateboards*skateboardCost);
	printf("Thank you, come again.\n");
	
	// Exit successfully
	return 0;
}