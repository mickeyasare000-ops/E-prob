# include<stdio.h>
int main(){
	// While loop Write a C code that ask the user to guessa single number.
	int sNum=12;
	int guess=0;
	

	while(guess!=sNum){
			printf("Enter your guess:");
	scanf("%d",&guess);
	
		if(guess!=sNum){
		
		printf("Wrong,Try again\n\n");
}
	}
	return 0;
}
