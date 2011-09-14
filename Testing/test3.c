#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int cows = 5;
	int farmers = 10;
	
	if (cows < farmers) {
		printf("Today's good, lots of farmers around\n");
	} else {
		printf("Today is hard work. Get to work farmers\n");
	}
	
	while (cows < farmers) {
		printf("There are less cows\n");
		cows++;
	}
	
	return 0;
}
