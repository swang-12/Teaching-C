// Author:		Stanley Wang
// Created:		10/25/11
// Modified:	11/16/11

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
	main1();
	main2();	
	main3();	
	main4();
	main5();
	main6();
	main7();
	main8();
	main9();
	main10();
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
	int numberComposite;
	int numberDivide = 1;
	int numberDivideBy = 1;
	int numberPrime = 1;
	printf("Enter a composite number. If you know what that is: ");
	scanf("%d", &numberComposite);
	
	while (numberDivide < numberComposite) {
		if (numberComposite % numberDivide == 0) {
			while (numberDivideBy < numberDivide) {
			numberDivideBy++;
			
				if (numberDivide % numberDivideBy == 0) {
					if (numberDivideBy == numberDivide) {
						numberPrime = numberDivideBy;
						numberDivideBy = 1;
					}
					break;
				}
			}
		}
		if (numberDivideBy == numberDivide) {
			numberDivideBy = 1;
		}
		numberDivide++;
	}
	
	if (numberPrime == 1) {
		printf("That number is not composite, ahh freshmen...\n");
	} else {
		printf("Funtion 3 = %d\n", numberPrime);
	}
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
	//What is the difference between the sum of the squares and the square of the sums for all natural numbers up until 150?
	int numberCount = 1;
	int numberCounter = 1;
	int numberCountSum = 0;
	int numberCountSquare = 0;
	
	printf("Function 6 = ");
	
	while (numberCount <= 150) {
		while (numberCounter <= numberCount) {
			numberCountSum += numberCounter;
			numberCountSquare += powint(numberCounter,2);
			numberCounter++;
		}
		printf("%d\n", (numberCountSquare - powint(numberCountSum,2)));
		numberCountSum = 0;
		numberCountSquare = 0;
		numberCounter = 0;
		numberCount++;
	}
	
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
	// Print the numbers 1 to 200 in base 2,3,4,5,6,7,8,9,10,11,12,13,14,15
	int numberCount = 1;
	int numberCountReset = numberCount;
	int numberCountPower = 0;
	int numberBase = 2;
	int numberPrint = 0;
	
	printf("Function 8 = \n");
	
	while (numberCount <= 200) {
		while (numberBase <= 15) {
		
			numberCountReset = numberCount;
			printf("%d = ", numberCountReset);
			while (numberCountReset >= powint(numberBase, numberCountPower)) {
				numberCountPower++;
			}
			
			//this subtracts one so the numberbase to the numbercountpower would still be less than numbercount
			numberCountPower--;
			
			while (numberCountPower >= 0) {
			
				while ((int)(numberCountReset / powint(numberBase, numberCountPower) > 0)) {
					numberPrint++;
					numberCountReset -= powint(numberBase, numberCountPower); 
				}
				printf("%d", numberPrint);
				numberCountPower--;
				numberPrint = 0;
			}
			printf(" in base %d\n", numberBase);
			numberBase++;
		}
		numberBase = 2;
		numberCount++;
	}
}

void main9 () {
	//Find the only Pythagorean triplet, {a, b, c}, for which a + b + c = 1000.	
	int a = 1;
	int b = 1;
	int c = 998;
	
	while (powint(a,2) + powint(b,2) != powint(c,2)) {
		c--;
		b++;
			if (c <= 1) {
				a++;
				b = 1;
				c = 1000 - a - b;
			}
	}
	printf("Function 9: (%d, %d, %d,)\n", a, b, c);
}

void main10 () {
	//Calculate the sum of all the primes below two million.
	int numberCount  = 1;
	int numberDivideBy;
	int sumPrime = 2;
	
	while (numberCount < 2000000) {
		//adding 2 because all even are not prime besides 2
		numberCount += 2;
		numberDivideBy = 2;
		while (numberDivideBy <= numberCount) {
			if (numberCount == numberDivideBy) {
				sumPrime += numberCount;
			} else if (numberCount % numberDivideBy == 0) {
				break;
			}
			numberDivideBy++;
		}
	}
	printf("Function 10: %d\n", sumPrime);
}

int powint (int num, int exp) {
	return (int)pow(num, exp);
}

