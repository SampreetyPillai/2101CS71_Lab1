#include<stdio.h>

void insertionSort(int array[], int n) 
{ 
    int i, element, j; 
    for (i = 1; i < n; i++) { element = array[i]; j = i - 1; 
    while (j >= 0 && array[j] > element) { 
            array[j + 1] = array[j]; 
            j = j - 1; 
        } 
        array[j + 1] = element; 
    } 
}

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

    switch(option){

        case 1:
        insertionSort(myarr, num);
        break;
        
    }

    //Print the array
    int u=0;
    while(u<num){
        printf("%d ", myarr[u]);
        u++;
    }

    return 0;
}
