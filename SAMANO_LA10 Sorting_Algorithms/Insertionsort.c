#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 

void insertionSort(int arr[], int n){
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArray(int arr[], int n){
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(int argc, char* argv[]){
	int n = argc - 1; 
    int arr[n];       
    for (int i = 1; i <= n; ++i) {
        arr[i - 1] = atoi(argv[i]);
    }
	insertionSort(arr, n);
	printArray(arr, n);
	return 0;
}
