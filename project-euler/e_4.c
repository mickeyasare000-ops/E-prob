#include<stdio.h>
int main(){
    ///Palindrome numbers
    
    int a;
    int b;
    int product;
    int highest_number=0;
    
for(a=100; a<=999; a++){
   
    for(b=a; b<=999; b++){
         product = a*b;
         // If the value is a six digit value;
         if(product>=100000){
            int d1= product/100000;
            int d2= (product/10000)%10;
             int d3= (product/1000)%10;
              int d4= (product/100)%10;
               int d5= (product/10)%10;
                int d6= product%10;
                if(d1==d6 && d2==d5 && d3==d4){
                    printf("%d * %d =%d \n", a, b,product);
                    product=highest_number;
                  
                }
        else if (product>=10000){
            int d1= (product/10000);
            int d2= (product/1000)%10;
            int d4= (product/10)%10;
            int d5= (product%10);
            if(d1==d5 && d2==d4){
                printf("%d \n",product);
            }
              product=highest_number;
                   
        }
         }
    }

}
  product=highest_number;
                    if(product>highest_number){
                        printf("%d \n",highest_number);
                    }
return 0;
}