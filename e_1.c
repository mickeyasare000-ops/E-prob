#include <stdio.h>
int main(){
    // In order to add multiples between 3 or 5: make sure that the numbers are divisible without a remainder.
    int i = 1;
    
    int sum = 0;
  printf("Enter lowest limit here:");
  scanf ("%d",&i);

    for (i=1; i<1000; i++){
 
    if (i % 3== 0){
  sum  += i ;
   
}
   else if(i%5==0){
    sum  += i ;
       
    }

     
    }
    printf("The total sum is %d\n",sum);
 
    return 0;
}