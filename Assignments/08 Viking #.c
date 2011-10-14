// Author:		Stanley Wang
// Created:		13/10/12
// Modified:	14/10/12

#include <stdio.h>

int main (int argc, char *argv[]) {

	int inputNum;
	
	do {
	
		printf("I HATE THIS NUMBER: ");
		scanf("%d", &inputNum);
		printf("Ryan Sullivan would say ");
	
		if (inputNum <= 499) {
			if (inputNum % 2 == 0) {
				//checks for even
				printf("ock");		
					if (inputNum % 10 == 0) {
					//integers of 10
						printf("-noc ");
					} else {
						printf("-op ");
					}
			} else {
				//checks for odd
				printf("virch ");
			}
				while ((inputNum < 500) && (inputNum >= 400)) {
						inputNum = inputNum - 10;
						printf ("ok-bozz ");
				} 
				while ((inputNum < 400) && (inputNum >= 300)) {
						inputNum = inputNum - 10;
						printf ("ok-doss ");
			}
				while ((inputNum < 300) && (inputNum >= 200)) {
						inputNum = inputNum - 10;
						printf ("ok-coss ");
			}
				while ((inputNum < 200) && (inputNum >= 100)) {
						inputNum = inputNum - 10;
						printf ("ok-ross ");
			}
			
			if (inputNum >=10) {
				if (inputNum >=20) {
					if (inputNum >=30) {
						if (inputNum >=40) {
							if (inputNum >=50) {
								if (inputNum >=60) {
									if (inputNum >=70) {
										if (inputNum >=80) {
											if (inputNum >=90) {
												printf("poss ");
											}	
										printf("qoss ");
										}	
									printf("sozz ");
									}	
								printf("goss ");
								}
							printf("foss ");
							}	
						printf("bozz ");
						}	
					printf("doss ");
					}	
				printf("coss ");	
				}	
			printf("ross ");
			}
			
			if (inputNum % 10 == 9) {
				printf("leack");
			}
			if (inputNum % 10 == 8) {
				printf("meep");
			}
			if (inputNum % 10 == 7) {
				printf("dook");
			}
			if (inputNum % 10 == 6) {
				printf("deek");
			}
			if (inputNum % 10 == 5) {
				printf("lopo");
			}
			if (inputNum % 10 == 4) {
				printf("drog");
			}
			if (inputNum % 10 == 3) {
				printf("cota");
			}
			if (inputNum % 10 == 2) {
				printf("rotf");
			}
			if (inputNum % 10 == 1) {
				printf("grot");
			}
			if (inputNum % 10 == 0) {
				printf("nokk");
			}
		} else {
			printf("DUHH");
		}
		printf("\n");
	} while (1);
	
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