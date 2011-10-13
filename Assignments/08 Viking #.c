// Author:		Stanley Wang
// Created:		13/10/12
// Modified:	13/10/12

#include <stdio.h>

int main (int argc, char *argv[]) {

	int inputNum;
	
	printf("I HATE THIS NUMBER: ");
	scanf("%d", &inputNum);
	printf("A Viking would say: ");
	
	if (inputNum <= 499) {
	
		if (inputNum % 2 == 0) {
			//checks for even
			printf("ock");
			
			if (inputNum % 10 == 0) {
				printf("-noc");
			} else {
				printf("-op");
			}
		
		} else {
			//checks for odd
			printf("virch");
			
		}
	} else {
		printf("DUHH");
	}
	
	
	return 0;

}

/* 	0 and below	=	nokk
	1			=	grot
	2			=	rotf
	3			=	cota
	4			=	drog
	5			=	lopo
	6			=	deek
	7			=	dook
	8			=	meep
	9			=	leack
	10+			=	ross
	20+			=	coss
	30+			=	doss
	40+			=	bozz
	50+			=	foss
	60+			=	goss
	70+			=	sozz
	80+			=	qoss
	90+			=	poss
	100+ int 10	=	ok-ross
	200+ int 10	=	ok-coss
	300+ int 10	=	ok-doss
	400+ int 10	=	ok-bozz
	
	even		= 	ock-op
	even int 10	=	ock-noc
	odd			=	virch
	*/