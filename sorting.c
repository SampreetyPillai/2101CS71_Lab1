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


void selectionSort(int array[], int n){
    int i,j,posn,new;
    for(i = 0; i < n - 1; i++){
        posn=i;
        for(j = i + 1; j < n; j++){
            if(array[posn] > array[j])
            posn=j;
        }
        if(posn != i){
            new = array[i];
            array[i] = array[posn];
            array[posn] = new;
}
}
}

void bubbleSort(int array[], int n){
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1]= temp;
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

        case 2:
        selectionSort(myarr, num);
        break;

        case 3:
        bubbleSort(myarr, num);
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
