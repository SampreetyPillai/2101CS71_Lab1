#include<stdio.h>

int main(){

    // number of elements
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    //storing elements in an array
    int myarr[num];
    printf("Enter the elements: ");
    int el=0;
    while (el<num){
        scanf("%d",&(myarr[el]));
        el++;
    }

    // type of sorting
    printf("Which operation would you like to perform?\nInsertion Sort( press 1 )\nSelection Sort( press 2)\nBubble sort( press 3)\nMerge Sort( press 4)\nQuick Sort( press 5)\n");
    int option;
    scanf("%d", &option);


    return 0;
}