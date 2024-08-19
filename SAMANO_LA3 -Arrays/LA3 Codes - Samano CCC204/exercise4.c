#include <stdio.h>
#define SIZE1 5
double getAverage(double *,int); //average of values in the array
double getTotals(double *,int); //sum of all values in the array
int main ()
{
 double values[5] = {3,5,7,9,2};

 printf("Average value %.2f\n",getAverage(values,SIZE1));
 printf("Sum of values %.2f\n",getTotals(values,SIZE1));

 return 0;
}
double getAverage(double *arr,int size){
 int i;
 double avg;
 double sum = 0;
 for (i = 0; i < size; ++i) {
 sum += arr[i];
 }
 avg = sum / size;
 return avg;
}
double getTotals(double arr[],int size){
 int i;
 double sum = 0;
 for (i = 0; i < size; ++i) {
 sum += arr[i];
 }
 return sum;
}

/*
1. Does the use of *arr or arr[]differ in their respective outputs? Why? 
 Ans: No, Because  
*/