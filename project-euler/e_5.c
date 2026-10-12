#include <stdio.h>
int main(){
    // If 2520 is divisible by 1 to 10, find the smallest number which is divible by 1 to 20.
    int sNum=0;
    int i;
    for(i=2520; i>=2520; i++){
    if(i%11==0 && i%12==0 && i%13==0 && i%14==0&& i%15==0 && i%16==0 && i%17==0 && i%18==0 && i%19==0 && i%20==0 ){
        printf("  The smallest number is %d \n",i);
        break;
    }
   
}
return 0;
}