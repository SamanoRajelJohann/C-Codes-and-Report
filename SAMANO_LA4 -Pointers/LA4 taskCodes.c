#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void changeCase(char *sptr, int mode);
void *getVowels();
void *getConsonants();
void ptrAdresses();

int main() {
    int generate = 1;
    int caseMode;
    char task2String[100];
    char task3String[100];
    char input[2];
    char taskSelection;
    
    while (generate) {
        printf("===================================\n");
        printf("||<<<      LA4 Task Codes     >>>||\n");
        printf("===================================\n");
        printf("|| [1] Task1 Data Type Addresses ||\n");
        printf("===================================\n");
        printf("|| [2] Task2 changeCase Function ||\n");
        printf("===================================\n");
        printf("|| [3] Task3 Vowels & Consonants ||\n");
        printf("===================================\n");
        printf("||<<<    Select Task Codes    >>>||\n");
        printf("===================================\n");
        printf("\nInput: ");
        scanf(" %c", &taskSelection);  
        printf("\n");

        switch (taskSelection) {
            case '1':
               ptrAdresses();
               break;
            case '2':
               printf("==============================\n");
               printf("||<<<  Provide A String  >>>||\n");
               printf("==============================\n");
               printf("\nInput: ");
               scanf(" %99[^\n]", task2String );
               printf("===================\n");
               printf("|| [1] UpperCase ||\n");
               printf("|| [0] LowerCase ||\n");
               printf("===================\n");
               printf("\nSelect Case: ");
               scanf(" %d", &caseMode);
               printf("\n");
               changeCase(task2String, caseMode);
               printf("|| Converted String: %s ||\n",task2String);
               printf("\n");
               break;
            case '3':
               getVowels();
               getConsonants();
               break;
            default: 
                printf("Invalid Input\n");
        }

        printf("Press any key to regenerate again. Press 'x' to quit: ");
        scanf(" %1s", input);

        if (input[0] == 'x' || input[0] == 'X') {
            generate = 0; 
            printf("\n");
        }
    }

    return 0;
}

void ptrAdresses() {
  int intDataType = 31;
  char charDataType = 'A';
  double doubleDataType = 4.453331;


  int *intPtr = &intDataType;
  char *charPtr = &charDataType;
  double *doublePtr = &doubleDataType;
  printf("========================================================\n");
  printf("|| Int Value: %d          || Int Address: %p    || intPtr : %d ||\n", intDataType, (void*)intPtr);
  printf("|| Char Value: %c          || Char Address: %p   ||\n", charDataType, (void*)charPtr);
  printf("|| Double Value: %f || Double Address: %p ||\n", doubleDataType, (void*)doublePtr);
  printf("========================================================\n");
  printf("\n");
}

void changeCase(char *sPtr, int mode) {
    while (*sPtr != '\0') {
        if (mode == 1) {
            *sPtr = toupper(*sPtr);
        } else if (mode == 0) {
            *sPtr = tolower(*sPtr);
        }
        sPtr++;
    }
}

void *getVowels() {
  static char vowels[] = {'A,','E,','I,','O,','U,','\0'};
  
  printf("Vowels: %s\n", vowels);
}

void *getConsonants() {
  static char consonants[] = {'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z','\0'};
  
  printf("Consonants: %s\n", consonants);
}