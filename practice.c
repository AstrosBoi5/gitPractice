#include<stdio.h>

// int bubbleSort(int arr[], int n){
//     for(int i = 0; )
// }
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 


int main()
{
int min = 0;
int arr[5] = {4, 1, 3, 9, 7};
    for(int i = 0; i <= 3; i++){
        for(int j = i+1;j <= 4 ;j++){
            min = arr[i];
            if(arr[j] < min){
                min = arr[j];
                arr[j] = arr[i];
                arr[i] = min; 
                printf("Sorted array: \n");
                printArray(arr, 5);
            }
        }
    }

return 0;
}