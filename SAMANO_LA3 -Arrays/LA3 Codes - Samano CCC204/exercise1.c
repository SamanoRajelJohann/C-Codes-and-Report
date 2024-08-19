#include <stdio.h>
int main(void)
{
 // use initializer list to initialize array n
int n[5] = {32, 27, 64, 18, 95};
printf("Element Value\n");
// output contents of array in tabular format
for (int i = 0; i < 5; ++i) {
printf("%d %d\n",i,n[i]);
}
}

/*Questions
1. What happens when array elements are more than five?
 Ans: The code still works but it does not see the sixth element as it is over the array size when i tried to run the code it showed a "warning: excess elements in array initializer" and it had  a "note: (near inittialization for 'n')." thats what i had found.

2. What happens when the array is referenced with an index greater than five?
 Ans: The code works perfectly if it is the modified code for question 1 then if it is not changed and the original code is used then it would work as it is over the placed elements in the array the number of initialized elements is less than the size of the array specified, then the rest of the elements will automatically be initialized to 0 by the compiler is what i had found in google.
       */