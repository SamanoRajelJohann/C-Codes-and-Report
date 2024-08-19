#include <stdio.h>
#define SIZE 12
int main(void)
{
 int a[SIZE] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
 int total = 0;
 for (size_t i = 0; i < SIZE; ++i)
 {
 total += a[i];
 }
 printf("Total of array element values is %d\n",total);
 printf("%d\n",SIZE);
}


/* 
1. What is the purpose of #define?
 Ans: #define is a directive that allows constant values to be declared for use throughout your code. You generally use this syntax when creating constants that represent numbers, strings, or expressions it cannot also be changed by your program code like variables.


2. In what situations is setting the array size using #define advantageous?
 Ans: The use of #define is that it is like a variable but it cannot be changed and it also can be used multiple times as if there are more of the same variables then it would work if not modified to a degree
*/
