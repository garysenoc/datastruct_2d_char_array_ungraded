#include <stdio.h>
#include <stdlib.h>
#include "2dc.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int col = 8;
	int arr[col][col];
	multiplication(arr);
	display(arr,col);
	
	
	
	printf("%d ",palindrome("aha"));
	return 0;
}


