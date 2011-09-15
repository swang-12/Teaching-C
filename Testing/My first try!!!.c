#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int var;
	
	printf("# of something: ");
	scanf("%d", &var);
	
	printf("you have %d of somethings\n", var);
	
	if (var > 100) {
		printf("You have a lot of somethings\n");
	} else {
		printf("How much somethings do you want? ");
		scanf("%d", &var);
		
		if (var > 100) {
			printf("You want a lot of somethings\n");
		}
	}
	return 0;
}