#include <stdio.h>
int main(){
	/* Write a C program that stimulates an international online store checkout system using a switch statemnt.*/
	float item_price;
	float converted_price;
	
	int choice;
	printf("Enter base price in Dollars:");
	scanf("%f" ,&item_price);
	printf("Choose from the list the currency you want to convert to\n");
	printf ("1. USD: 1.00\n");
	printf("2. EUR: 0.92\n");
	printf("3. GHS: 15\n");
	printf("Enter input here:");
	scanf("%d" ,&choice);
	switch (choice){
		case 1:
			converted_price= item_price*1.00;
			printf("Total:%.2f",converted_price);
			break;
		case 2:
			converted_price= item_price*0.92;
			printf("Total:%.2f",converted_price);
			break;
		case 3:
			converted_price= item_price*15.00;
			printf("Total:%.2f",converted_price);
			break;
			default:
				printf("Invalid Entry");	
			
	}

	return 0;
}
