#include <stdio.h>

int main(int argc, char *argv[])
{
	int hi = 5;
	int hello = 10;
	
	hello = hi * 500;
	hello = hi / 500;
	hello = hi + 500;
	hello = hi - 500;
	hello = hi % 500;
	
	printf("%d %d \n", hi, hello);
	
	return 0;
}
