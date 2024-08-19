#include <stdio.h>
int main ()
{
 /* an array with 5 rows and 2 columns*/
 int a[5][2] = { 0 , 0, 1, 2, 2, 4, 3, 6, 4, 8};
 int i, j;
 /* output each array element's value */
 printf("Array [m][n] Value\n");
 for ( i = 0; i < 5; i++ )
 {
 for ( j = 0; j < 2; j++ )
 {
 printf("[%d] [%d] %d\n",i,j,a[i][j]);
 }
 }
 return 0;
}

/*
1. What is the purpose of inner { } in array declaration and initialization?
 Ans: I think what the the use for the inner bracket the columns as from what i understand after searching google it is important when declaring 2 dimensional arrays it is need for the columns to have the inner brackets.
2. What happens when inner {} are omitted?
 Ans: It would to a failure as it is a must for a 2-dimensional array is wwhat it is stated in google but when i removed the inner brackets then it would work still.
*/