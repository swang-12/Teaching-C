// Author:		Stanley Wang
// Created:		10/25/11
// Modified:	11/04/11

#include <stdio.h>
#include <math.h>

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
int powint (int num, int exp);

int main (int argc, char *argv[]) {
	main3();
	main6();
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
	int numberOne = 99;
	int numberTwo = 99;
	int product = 0;
	int productTrial = 0;
	
	while (numberOne < 1000) {
		numberOne++;
		numberTwo++;
		product = numberOne * numberTwo;
		if (product <= productTrial) {
			product = productTrial;
		}
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
	int numberOne = 0;
	int numberTwo = 0;
	int numberThree = 0;
	int numberFour = 0;
	int numberFive = 0;
	int product = 0;
	int productTrial = 0;
	
	while (numberOne < 1000) {
		numberOne++;
		numberTwo = numberOne - 1;
		numberThree = numberTwo - 1;
		numberFour = numberThree - 1;
		numberFive = numberFour - 1;
		if (product <= productTrial) {
			product = productTrial;
		}
		product = numberOne * numberTwo * numberThree * numberFour * numberFive;
	}
	printf("Function 8 = %d %d\n", product, productTrial);
}

void main9 () {
	//Find the only Pythagorean triplet, {a, b, c}, for which a + b + c = 1000.	
	int a = 1;
	int b = 1;
	int c = 998;
	
	while (powint(a,2) + powint(b,2) <= powint(c,2)) {
		c--;
		b++;
			if (c <= 1) {
				a++;
				b = 1;
				c = 1000 - a - b;
			}
	}
	printf("Function 9: %d + %d + %d = %d\n", a, b, c, a+b+c);
	printf("%d %d %d", powint(a,2), powint(b,2), powint(c,2));
}

void main10 () {
	//Calculate the sum of all the primes below two million.
	int numberCount  = 2;
	int numberDivideBy = 2;
	int primeCount = 1;
	int sumPrime;
	
	while (numberCount < 2000000) {
		while (numberDivideBy < numberCount) {
			if (numberCount % numberDivideBy == 0) {
				break;
			} else if (numberCount == numberDivideBy) {
				sumPrime += numberCount;
				primeCount++;
				printf(" HELLO %d %d\n", numberCount, primeCount);
			}
			numberDivideBy++;
		}
		printf("Funtion 10: %d %d\n", numberCount, primeCount);
		numberCount++;
		numberDivideBy = 2;	
	}
}

int powint (int num, int exp) {
	return (int)pow(num, exp);
}

