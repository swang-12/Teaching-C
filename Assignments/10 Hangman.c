// Author:		Stanley Wang
// Created:		11/22/11
// Modified:	11/22/11

#include <stdio.h>

void displayMan(int num);
int areStringsEqual(char *guess, char *word, int length);

int main (int argc, char *argv[]) {
	// You get to play hangman!
	
	int wordLength;
	int wordLengthCtr;
	int wordLetterTrue = 0;
	int numberWrong = 0;
	
	printf("How many letters long is your word? ");
	scanf("%d", &wordLength);
	char word[wordLength];
	scanf("%s", word);
	char wordGuess[wordLength];
	char wordLetterGuess;
	
	int i = 0;
	while (i < 111) {
		printf("\n");
		i++;
	}
	
	// adds ? to each letter space
	wordLengthCtr = 0;
	while (wordLengthCtr < wordLength) {
		wordGuess[wordLengthCtr++] = '?';
	}
	
	printf("\n%s\n", wordGuess);
	while (areStringsEqual(wordGuess, word, wordLength) == 0) {
	
		wordLengthCtr = 0;
		wordLetterTrue = 0;
		printf("\nGuess a letter: \n");
		wordLetterGuess = getchar();
		wordLetterGuess = getchar();
	
		while (wordLengthCtr < wordLength) {
			if (wordLetterGuess == word[wordLengthCtr]) {
				wordGuess[wordLengthCtr] = wordLetterGuess;
				wordLetterTrue = 1;
			}
			wordLengthCtr++;
		}
		
		displayMan(numberWrong);
		
		if (wordLetterTrue != 1) {
			numberWrong++;
			if (numberWrong > 8) {
				printf("\nYou killed Kenny\nThe word was %s\n", word);
				return 0;
			}
		}
		printf("\n%s\n", wordGuess);
	}
	printf("\nYou win\nKenny lives\n");
	return 0; 
}

int areStringsEqual(char *guess, char *word, int length) {
	int i = 0;
	while (i < length) {
		if (word[i] != guess[i]) {
			printf("They are not equal");
			return 0;
		}
		i++;
	}
	return 1;
}

void displayMan(int num) {

	int i = 0;
	
	printf("	_________					\n");
	if (num >= 0) {
		i = 5;
	}
	if (num >= 1) {
		printf("	|	 |						\n");
		i = 4;
	}
	if (num >= 2) {
		printf("	|	 o						\n");
		i = 3;
	}
	if (num == 3) {
		printf("	|	 | 						\n");
		i = 2;
	} else if (num == 4) {
		printf("	|	/| 						\n");
		i = 2;
	} else if (num >= 5) {
		printf("	|	/|\\					\n");
		i = 2;
	}
	if (num >= 6) {
		printf("	|	 |						\n");
		i = 1;
	}
	if (num == 7) {
		printf("	|	/						\n");
	}  else if (num >= 8) {
		printf("	|	/ \\					\n");
	}
	while (i > 0) {
		printf("	|	 						\n");
		i--;
	}
	printf("	|________					\n");
}


	