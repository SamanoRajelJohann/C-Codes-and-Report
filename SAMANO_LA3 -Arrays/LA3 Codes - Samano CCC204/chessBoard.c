#include <stdio.h>

int main() {
    //Declaring variables Needed for the code.
    int rows[1], cols[1], process = 1;
    char chessBoard[100][100], input[2], char1, char2;

    while (process) {
        printf("ChessBoard Pattern\n");

        //Input for the number of rows and columns.
        printf("Number of Rows: ");
        scanf("%d", &rows[1]);
        printf("Number of Columns: ");
        scanf("%d", &cols[1]);

        //Input for characters to display on the chessboard.
        printf("Char1 to Display: ");
        scanf(" %c", &char1);
        printf("Char2 to Display: ");
        scanf(" %c", &char2);

        //Displaying the configuration of the chessboard.
        printf("Generating Size of Chessboard by %d x %d with the pattern of %c and %c.\n", rows[1], cols[1], char1, char2);
        printf("\n");

        //Generating the chessboard pattern.
        for (int i = 1; i <= rows[1]; i++) {
            for (int j = 1; j <= cols[1]; j++) {
                if ((i + j) % 2 == 0) {
                    chessBoard[i][j] = printf(" %c ", char1);
                } else {
                    chessBoard[i][j] = printf(" %c ", char2);
                }
            }
            printf("\n");
        }
        //While loop to repeat it again and change the size or character display.
        printf("\nDo you want to go again? (Y/N): ");
        scanf(" %c", input);

        if (input[0] == 'n' || input[0] == 'N') {
            process = 0;
            printf("\n");
        }
    }
    return 0;
}
