#include<stdio.h>


int main(){

    float x,y;
    printf("Enter first number: ");
    scanf("%f",&x);
    
    printf("Enter second number: ");
    scanf("%f",&y);
    printf("Which operation would you like to perform?\nAddition( press 1 )\nSubtraction( press 2)\nMultiplication( press 3)\nDivision( press 4)\n");
    int num;
    
    float new;
    scanf("%d", &num);
    switch(num){
        case 1:
        new = x+y;
        break;
    }
    printf("Result is: %f", new);

    return 0;
}
