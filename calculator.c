#include<stdio.h>


int main(){

    float x,y;
    printf("Enter first number: ");
    scanf("%f",&x);
    
    printf("Enter second number: ");
    scanf("%f",&y);
    printf("Which operation would you like to perform?\nAddition( press 1 )\nSubtraction( press 2)\nMultiplication( press 3)\nDivision( press 4)\n");
    int num;
    scanf("%d", &num);

    //Division by 0 is invalid
    if (num==4 && y==0){
        printf("Cannot divide by 0");
    }else if(num==1 ||num==2||num==3||num==4){
    
    float new;
    
    switch(num){
        //For addition
        case 1:
        new = x+y;
        break;

        //For subtraction
        case 2:
        new = x-y;
        break;

        //For multiplication
        case 3:
        new = x*y;
        break;

        //For division
        case 4:
        new = x/y;
        break;
        
    }
    printf("Result is: %f", new);
    }else{

        //Print error message
        printf("Invalid operator");
    }
    

    return 0;
}
