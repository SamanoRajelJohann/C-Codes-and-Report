#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> 

void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n){
	int i, j, min_idx;
	for (i = 0; i < n-1; i++){
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;
		if(min_idx != i)
			swap(&arr[min_idx], &arr[i]);
	}
}

void printArray(int arr[], int size){
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(int argc, char* argv[]){
    int n = argc - 1; 
    int arr[n];      
    for (int i = 1; i <= n; ++i) {
        arr[i - 1] = atoi(argv[i]); 
    }
	selectionSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
