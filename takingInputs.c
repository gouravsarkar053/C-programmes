#include<stdio.h>

int main()
{
   

    int num1;  
    float fraction;     
    char character;

    // Taking Character as input from the user
    printf("Enter a Character:");
    scanf("%s", &character);
    printf("\nThe character that you have entered is %c\n", character);

    
    printf("Enter a number:");
    
    // Taking integer as input from user
    scanf("%d", &num1);
    printf("The number you have entered is %d\n", num1);

    // Taking float or fraction as input from the user
    printf("\nEnter a Decimal number:");
    scanf("%f", &fraction); 
    printf("The float or fraction that you have entered is %f\n", fraction);

 
    
    return 0;
}
