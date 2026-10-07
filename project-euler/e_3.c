#include<stdio.h>
int main(){
    int long long Limit =600851475143LL;
    int Lnum =0;

int long long i;
    
for(i=2; i<= Limit; i++){
    // The limit%i will help us to know if the number is a factor of the limit.
    if(Limit%i==0){

int count=0;
// The count is used to determine the number of factors the selected values of i have.
// The j will help sort tha anser we had from i because some of the values we will get in i will be composite soo we have to take them out by giving that job to j.
int j=1;
while(j<=i){
    if(i%j==0){
        count++;
      
    }
    j++;
}
   
      

 if(count==2){
 printf("%d\n",i);
  Lnum =i;
        
    }
  
}
}
  printf("The largest value is %d \n",i);
   
    
    return 0;
}