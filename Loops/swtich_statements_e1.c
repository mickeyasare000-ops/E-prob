#include<stdio.h>
int main(){
	// SWITCH STATEMENTS
    /* Wrie a program task that prompt a user to enter an integer from 1 to 4 representing a coffeee menu choice using a switch statement. Use the devault to print invalid numbers

    1. Espresso   2. Cappuccino    3. Latte    4. Americano*/ 
    int choice ;
    printf("Enter choice of coffee: ");
    scanf("%d" ,&choice);
    switch (choice)
    {
    case 1:
    	printf("Espresso");
        break;
    case 2:
    	printf("Cappuccino");
    	break;
    case 3:
    	printf("Latte");
    	break;
   	case 4:
   		printf("Americano");
   		break;
    default:
    	printf("Invalid entry");
        break;
    }
    
    

    return 0;
}
