#include<stdio.h>
int main(){
	// Write a C program that ask a user to enter a single number and then print its multiplication table from 1 to 12 .
	int num;
	int i=1;
	int product;

	printf("Enter a number:");

	scanf("%d",&num);
	
	for( i=1; i<=10; i++){
	
		product= num*i;
	printf("%d\n",product);
}
return 0;
}
