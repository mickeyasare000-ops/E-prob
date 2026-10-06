
// Fibonnaci Sequence 
#include<stdio.h>
int main(){
    int a = 0;
   int b = 1;
   int c=a+b;
   int total=0;
int limit= 4000000;
while(c<=limit){
    if(c%2==0){
        total+=c;
    }
    a=b;
    b=c;
    c=a+b;
}
printf("Total: %d \n", total);
return 0;
} 