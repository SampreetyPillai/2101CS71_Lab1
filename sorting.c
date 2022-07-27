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

void merge(int array[], int l, int m, int r){

    int i, j, t;
    int n1 = m-l+1;
    int n2 = r-m;
    int newarr[n1], newarr2[n2];
 
    for (i = 0; i < n1; i++)
        newarr[i] = array[l+i];
    for (j = 0; j < n2; j++)
        newarr2[j] = array[m+1+j];
    i = 0; 
    j = 0; 
    t = l;
    while (i < n1 && j < n2) {
        if (newarr[i] <= newarr2[j]) {
            array[t] = newarr[i];
            i++;
        }
        else {
            array[t] = newarr2[j];
            j++;
        }
        t++;
    }
    while (i < n1) {
        array[t] = newarr[i];
        i++;
        t++;
    }
    while (j < n2) {
        array[t] = newarr2[j];
        j++;
        t++;
    }
}

void mergeSort(int array[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(array, l, m);
        mergeSort(array, m + 1, r);
        merge(array, l, m, r);
    }
}

void quickSort(int array[],int first,int last){
    int i, j, point, temp;
    if(first<last){
        point = first;
        i = first;
        j = last;
        while(i<j){
            while(array[i]<=array[point]&&i<last)
            i++;
            while(array[j]>array[point])
            j--;
            if(i<j){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        temp = array[point];
        array[point] = array[j];
        array[j] = temp;
        quickSort(array,first,j-1);
        quickSort(array,j+1,last);
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
    
    if(option==1||option==2||option==3||option==4||option==5){

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

        case 4:
        mergeSort(myarr, 0, sizeof(myarr)/sizeof(myarr[0]) - 1);
        break;

        case 5:
        quickSort(myarr,0,num-1);
        break;
    }

    //Print the array
    int u=0;
    while(u<num){
        printf("%d ", myarr[u]);
        u++;
    

    }
    }else{
        printf("Invalid operator");
    }

    

    return 0;
}
