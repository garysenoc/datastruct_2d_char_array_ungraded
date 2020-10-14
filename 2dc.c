#include <stdio.h>
#include <stdlib.h>
#include "2dc.h"
#include <string.h>

void multiplication(int table[][COL]){
	int i,j;
	for(i=1;i<=COL;i++){
		for(j=1;j<=COL;j++)
			table[i-1][j-1] = i*j;
	}
}

void display(int arr[][COL],int size){
	
	int i,j;
	for(i=1;i<=size;i++){
		for(j=1;j<=size;j++)
			printf("%d ",arr[i-1][j-1]);
		printf("\n");
	}
}

int palindrome(char str1[]){
	int i;
	for(i=0;i<strlen(str1)/2;i++){
		if(tolower(str1[i])!=tolower(str1[strlen(str1)-i-1]))
			return 0;
	}
	return 1;
}
