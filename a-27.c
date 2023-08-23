#include <stdio.h>    

int minarray(int arr[], int size) {
    int min = arr[0];
    int i = 0;
    for (i = 1;i<size;i++) {
        if (min>arr[i]) {
            min = arr[i];
        }
    }//end of for  
    return min;
}//end of function  

void main() {
    int i = 0, min = 0;
    int numbers[] = { 40,52,71,30,18,89 };//declaration of array  

    min = minarray(numbers, 6);//passing array with size  
    printf("minimum number is %d \n", min);

}


