# include<stdio.h>
// DO WHILE LOOPS

int main(){
	int sNum=32;
	int guess;
	do{
		printf("Enter guess:");
		scanf("%d",&guess);
		if(guess!=sNum){
			printf("TRY AGAIN!!\n\n");
		}
		else if(guess=sNum){
			printf("WELCOME");
		}
		}
		while(guess!=sNum);
	
	return 0;
}
