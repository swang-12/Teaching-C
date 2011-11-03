// Author:		Stanley Wang
// Created:		10/25/11
// Modified:	10/25/11

#include <stdio.h>

void main1 ();
void main2 ();
void main3 ();
void main4 ();
void main5 ();
void main6 ();
void main7 ();
void main8 ();
void main9 ();
void main10 ();

int main (int argc, char *argv[]) {
	main1();
	main2();
	main3();
	main4();
	main5();
	main6();
	main7();
	main8();
	main9();
	return 0;
}

void main1 () {
	// Add all the natural numbers below one thousand that are multiples of 3 or 5.
	int numberCount = 1;
	int sum = 0;
	
	while (numberCount < 1000) {
		if ((numberCount % 3 == 0) || (numberCount % 5 == 0)) {
			sum = sum + numberCount;
		}
		numberCount++;
	}
	printf("Function 1 = %d\n", sum);
}

void main2 () {
	//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
	int numberFibonacci = 0;
	int numberDetermine = 1;
	int sum = 0;
	
	while (numberFibonacci <= 4000000) {
		if (numberFibonacci % 2 == 0) {
			sum = sum + numberFibonacci;
		}
		numberFibonacci = numberDetermine - numberFibonacci;
		numberDetermine = numberFibonacci + numberDetermine;
	}
	printf("Function 2 = %d\n", sum);
}

void main3 () {
	//Find the largest prime factor of a composite number.
	//input number
	
}

void main4 () {
	//Find the largest palindrome made from the product of two 3-digit numbers.
	int numberOne = 100;
	int numberTwo = 100;
	int product = 0;
	int productTrial = 0;
	
	while (numberOne < 1000) {
		if (product <= productTrial) {
			product = productTrial;
		}
		product = numberOne * numberTwo;
		numberOne++;
		numberTwo++;
	}
	printf("Function 4 = %d\n", product);
}

void main5 () {
	//What is the smallest number divisible by each of the numbers 2 to 200?
	int numberCount  = 1;
	int numberDivideBy = 2;
	
	printf("Function 5:\n[");
	
	while (numberCount <= 200) {
		while (numberDivideBy < numberCount) {
			if (numberCount % numberDivideBy == 0) {
				break;
			}
			numberDivideBy++;
		}
		printf("%d %d, ", numberCount, numberDivideBy);
		numberCount++;
		numberDivideBy = 2;
	}
	printf("]");
}

void main6 () {
	//What is the difference between the sum of the squares and the square of the sums?
	
}

void main7 () {
	//Find the 10001st prime
	int numberCount = 1;
	int numberDivideBy;
	int primeCount = 0;
	
	while (primeCount < 10001) {
		numberCount++;
		numberDivideBy = 2;
		while (numberDivideBy <= numberCount) {
			if (numberCount % numberDivideBy == 0) {
				if (numberCount == numberDivideBy) {
					primeCount++;
				}
				break;
			}
			numberDivideBy++;
		}
	}
	printf("Function 7: %d \n", numberCount);
}

void main8 () {
	//Discover the largest product of five consecutive digits in the 1000-digit number.	
	
}

void main9 () {
	//Find the only Pythagorean triplet, {a, b, c}, for which a + b + c = 1000.	
	int a = 0;
	int b = 0;
	int c = 0;
	
	while ((a + b + c) != 56) { 
		a++;
		while (((int)((a^2) + (b^2))^(.5)) != c) {
			b++;
			break;
			//c = (int)((int)((a^2) + (b^2))^(.5));
			//printf("%d %d %d \n", a, b, c);
		}
	}
}

void main10 () {
	//Calculate the sum of all the primes below two million.
	int numberCount  = 2;
	int numberDivideBy = 2;
	int sumPrime = 1;
	int primeCount = 1;
	
	printf("Function 7:\n");
	
	while (numberCount < 2000000) {
		while (numberDivideBy < numberCount) {
			if (numberCount % numberDivideBy == 0) {
				break;
			} else if (numberCount == numberDivideBy) {
				sumPrime += numberCount;
				primeCount++;
				printf(" HELLO %d %d\n", sumPrime, primeCount);
			}
			numberDivideBy++;
		}
		printf("%d %d\n", sumPrime, primeCount);
		numberCount++;
		numberDivideBy = 2;	
	}
}