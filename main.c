#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int width=0;
	int left,right;
	int i,k;
	for (i=0;i<9;i++){
		for (k=0;k<11;k++){
		left = 5 - width;
		right = 5 + width;
		if(k>=left && k<=right)
		    printf(" ");
		else
		printf("*");
		}
		if (i < 4)
		    width++;
		else
		    width--;
		    printf("\n");
	}
	return 0;
}