#include<stdio.h>
int main(){
   printf("============================================================================================================= \n");
    printf("A code to find the difference between the square of the sum of 1-100 && the sum of the squares of 1-100 \n");
   printf("============================================================================================================== \n");
   // This is the first code to calculate the squares of the individual values, after that you sum them all together.
    int i=1;
    
    int product=0;
    for(i=1; i<=100; i++ ){
        // i*i multiplies i by itself
        i*i;
        // Here you are add the answer you get from i*i to the product since you want its sum.
        product+=i*i;
       
 }
  printf(" The sum of the squares of the individual numbers is: %d \n", product);
  // This second code helps you to find the sum of the numbers from 1-100, after that it finds its square.
 int j=1;
  int sum=0;
  int square;

 for(j=1; j<=100; j++){
   sum+=j;
   square = sum * sum;
 }
printf(" The sum of 1-100 is: %d \n", sum);
printf("Its square is %d \n",square);
   
   int difference=0;
   difference= square - product;
   printf("The difference between the two squares is %d \n",difference);
    return 0;
}