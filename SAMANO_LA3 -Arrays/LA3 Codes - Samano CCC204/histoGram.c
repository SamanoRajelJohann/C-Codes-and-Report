#include <stdio.h>

int main() {
    //Initialize a 5-element array and have the values 5, 4, 3, 2, 1.
    int index[5] = {5, 4, 3, 2, 1};
    printf("Index     Value      Histogram\n");

    //Loop through the array to display the index and value of each element.
    for (int i = 0; i < 5; i++) {
        printf("  %d       %d       ", i, index[i]);

        //For loop to print out the amount of "$" it needs for each value.
        for (int j = 0; j < index[i]; j++) {
            printf("$");
        }
        printf("\n");
    }

    return 0;
}
