// Author:		Stanley Wang
// Created:		9/28/11
// Modified:	9/28/11

#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main (int argc, char *argv[]) {

	float num1 = 0;
	float num2;
	int num3 = 0;
	
	while (num1 < 360) {
	
		if (num1 == (10*num3)) {
		num3++;
			if ((-1 <= num2) && (num2 < -.9)) {
				printf("*                     \n");
			} else if ((-1 <= num2) && (num2 < -.9)) {
				printf(" *                    \n");
			} else if ((-.9 <= num2) && (num2 < -.8)) {
				printf("  *                   \n");
			} else if ((-.8 <= num2) && (num2 < -.7)) {
				printf("   *                  \n");
			} else if ((-.7 <= num2) && (num2 < -.6)) {
				printf("    *                 \n");
			} else if ((-.6 <= num2) && (num2 < -.5)) {
				printf("     *                \n");
			} else if ((-.5 <= num2) && (num2 < -.4)) {
				printf("      *               \n");
			} else if ((-.4 <= num2) && (num2 < -.3)) {
				printf("       *              \n");
			} else if ((-.3 <= num2) && (num2 < -.2)) {
				printf("        *             \n");
			} else if ((-.2 <= num2) && (num2 < -.1)) {
				printf("         *            \n");
			} else if ((-.1 <= num2) && (num2 < -.01)) {
				printf("          *           \n");
			} else if ((-.01 <= num2) && (num2 <= .01)) {
				printf("           *          \n");
			} else if ((.01 < num2) && (num2 <= .1)) {
				printf("            *         \n");
			} else if ((.1 < num2) && (num2 <= .2)) {
				printf("             *        \n");
			} else if ((.2 < num2) && (num2 <= .3)) {
				printf("              *       \n");
			} else if ((.3 < num2) && (num2 <= .4)) {
				printf("               *      \n");
			} else if ((.4 < num2) && (num2 <= .5)) {
				printf("                *     \n");
			} else if ((.5 < num2) && (num2 <= .6)) {
				printf("                 *    \n");
			} else if ((.6 < num2) && (num2 <= .7)) {
				printf("                  *   \n");
			} else if ((.7 < num2) && (num2 <= .8)) {
				printf("                   *  \n");
			} else if ((.8 < num2) && (num2 <= .9)) {
				printf("                    * \n");
			} else if ((.9 < num2) && (num2 <= 1)) {
				printf("                     *\n");
			}
		}
	num1++;
	num2 = (sin((PI/180)*num1));
	}
	return 0;
}