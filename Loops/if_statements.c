# include<stdio.h>

int main(){
	int age;
	int country;
	printf("Select your country\n");
	printf("1. Ghana\n");
	printf("2. Egypt\n");
	printf("3. Nigeria\n");
	printf("HERE:");
	scanf("%d",&country);
	
	if (country=1){
		printf("Enter age:");
		scanf("%d",&age);
	}
	if (age>=18){
	printf("YOU ARE ELIGIBLE TO VOTE!!!!");
	
		}
	else{
			printf(" NOT ELIGIBLE ");
	
	}
	return 0;
}
