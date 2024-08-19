#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool areStringsEqual(const char *str1, const char *str2);

void KeywordLogic(const char* key_Word, const char* keyAll, const char* keyNICO, const char* keyFAVE, const char* keyNICC, const char* keyNIFF, const char* nick_Name, const char* course, const char* favorite_Food, const char* favorite_Color);

void displayLetters(const char *arr);

void displayNum(const char *arr);

void displayAlphaNum(const char *arr);

void displayNotAlphaNum(const char *arr);

int main() {
    int generate = 1;
    int letterIndex = 0;
    int numberIndex = 0;
    int alphaIndex = 0;
    int nonalphaIndex = 0;
    char arrLetter[20];
    char arrNum[20];
    char arrAlpha[20];
    char arrNonAlpha[20];
    char input[2];
    char taskSelection;
    char musicMan[] = "DiMu$ikm4n_R3turn5";
    char nick_Name[20];
    char course[20];
    char favorite_Food[20];
    char favorite_Color[20];
    char key_Word[20];
    const char *keyAll = "ALL";
    const char *keyNICO = "NICO";
    const char *keyFAVE = "FAVE";
    const char *keyNICC = "NICC";
    const char *keyNIFF = "NIFF";

    while (generate) {
        printf("==========================================\n");
        printf("||<<<<        LA5 Task Codes        >>>>||\n");
        printf("==========================================\n");
        printf("|| [1] Task1 || [2]Task2 ||  [2] Task3  ||\n");
        printf("==========================================\n");
        printf("||<<<<      Select Task Codes       >>>>||\n");
        printf("==========================================\n");
        printf("\n");
        printf("                Input: ");
        scanf(" %c", &taskSelection);
        printf("\n");

        switch (taskSelection) {
            case '1':
                for (int i = 0; musicMan[i]; i++) {
                if (isalpha(musicMan[i])) {
                arrLetter[letterIndex++] = musicMan[i];
                } else if (isdigit(musicMan[i])) {
                arrNum[numberIndex++] = musicMan[i];
                     } 
                }           
                for (int i = 0; musicMan[i]; i++) {
                if (isalnum(musicMan[i])) {
                arrAlpha[alphaIndex++] = musicMan[i];
                } else {
                arrNonAlpha[nonalphaIndex++] = musicMan[i];
                     }
                }
                arrLetter[letterIndex] = '\0';
                arrNum[numberIndex] = '\0';
                arrAlpha[alphaIndex] = '\0';
                arrNonAlpha[nonalphaIndex] = '\0';
                printf("==========================================\n");
                printf("||>>> Letters: %s         <<<||\n", arrLetter);
                printf("||>>> Numbers: %s                   <<<||\n", arrNum);
                printf("||>>> AlphaNumeric: %s <<<||\n", arrAlpha);
                printf("||>>> NonAlphaNumeric: %s            <<<||\n", arrNonAlpha);
                printf("==========================================\n");
                break;
            case '2':
                displayLetters(musicMan);
                displayNum(musicMan);
                displayAlphaNum(musicMan);
                displayNotAlphaNum(musicMan);
                break;
            case '3':
                printf("===========================================\n");
                printf("||<<<<      Answer Prompts Given     >>>>||\n");
                printf("===========================================\n"); 
                printf("\n[]=======================================[]\n");     
                printf("  Nickname: ");
                scanf("%19s", nick_Name);
                printf("[]=======================================[]\n");
                printf("  Course: ");
                scanf("%19s", course);
                printf("[]=======================================[]\n");
                printf("  Favorite Food: ");
                scanf("%19s", favorite_Food);
                printf("[]=======================================[]\n");
                printf("  Favorite Color: ");
                scanf("%19s", favorite_Color);
                printf("[]=======================================[]\n");
                printf("\n");
                printf("}========================================={\n");
                printf("||<<<            Keywords             >>>||\n");
                printf("}========================================={\n");
                printf("||<<<  ALL   NICO  FAVE   NICC  NIFF  >>>||\n");
                printf("}========================================={\n");
                printf("\n           Input Keyword: ");
                scanf("%19s", key_Word);
                printf("\n");
                KeywordLogic(key_Word, keyAll, keyNICO, keyFAVE, keyNICC, keyNIFF, nick_Name, course, favorite_Food, favorite_Color);
                break;
                break;
            default:
                printf("}========================================={\n");
                printf("||             Invalid Input             ||\n");
                printf("}========================================={\n");
                printf("\n");
        }
        printf("\n");
        printf("Press any key to regenerate again. Press 'x' to quit: ");
        scanf(" %1s", input);
        printf("\n");

        if (input[0] == 'x' || input[0] == 'X') {
            generate = 0;
            printf("\n");
        }
    }

    return 0;
}
void displayLetters(const char *musicMan) {
    char arrLetter[20];
    int letterIndex = 0;

    for(int i = 0; musicMan[i]; i++){
        if(isalpha(musicMan[i])){
            arrLetter[letterIndex] = musicMan[i];
            letterIndex++;
        }
    }
    arrLetter[letterIndex] = '\0';
     printf("==========================================\n");
     printf("||>>> Letters: %s         <<<||\n", arrLetter);
     printf("==========================================\n");
}
void displayNum(const char *musicMan) {
    char arrNum[20];
    int numberIndex = 0;

    for(int i = 0; musicMan[i]; i++){
        if(isdigit(musicMan[i])){
            arrNum[numberIndex] = musicMan[i];
            numberIndex++;
        }
    }
     arrNum[numberIndex] = '\0';
     printf("==========================================\n");
     printf("||>>> Numbers: %s                   <<<||\n", arrNum);
     printf("==========================================\n");
}
void displayAlphaNum(const char *musicMan) {
    char arrAlpha[20];
    int alphaIndex = 0;
    
    for(int i = 0; musicMan[i]; i++){
        if(isalnum(musicMan[i])){
            arrAlpha[alphaIndex] = musicMan[i];
            alphaIndex++;
        
        }
    }
    arrAlpha[alphaIndex] = '\0';
     printf("==========================================\n");
     printf("||>>> AlphaNumeric: %s <<<||\n", arrAlpha);
     printf("==========================================\n");
}
void displayNotAlphaNum(const char *musicMan) {
    char arrNonAlpha[20];
    int nonalphaIndex = 0;

    for(int i = 0; musicMan[i]; i++){
         if(!isalnum(musicMan[i])){
         arrNonAlpha[nonalphaIndex] = musicMan[i];
         nonalphaIndex++;
        }
    }   
    arrNonAlpha[nonalphaIndex] = '\0';
     printf("==========================================\n");
     printf("||>>> NonAlphaNumeric: %s            <<<||\n", arrNonAlpha);
     printf("==========================================\n");
}
void KeywordLogic(const char* key_Word, const char* keyAll, const char* keyNICO, const char* keyFAVE, const char* keyNICC, const char* keyNIFF, const char* nick_Name, const char* course, const char* favorite_Food, const char* favorite_Color) {
    if (areStringsEqual(key_Word, keyAll)) {
        printf("[]=======================================[]\n");
        printf("  Nickname is: %s\n", nick_Name);
        printf("[]=======================================[]\n");
        printf("  Course is: %s\n", course);
        printf("[]=======================================[]\n");
        printf("  Favorite Food is: %s\n", favorite_Food);
        printf("[]=======================================[]\n");
        printf("  Favorite Color is: %s\n", favorite_Color);
        printf("[]=======================================[]\n");
    } else if (areStringsEqual(key_Word, keyNICO)) {
        printf("[]=======================================[]\n");
        printf("Nickname is: %s\n", nick_Name);
        printf("[]=======================================[]\n");
        printf("Course is: %s\n", course);
        printf("[]=======================================[]\n");
    } else if (areStringsEqual(key_Word, keyFAVE)) {
        printf("[]=======================================[]\n");
        printf("Favorite Color is: %s\n", favorite_Color);
        printf("[]=======================================[]\n");
        printf("Favorite Food is: %s\n", favorite_Food);
        printf("[]=======================================[]\n");
    } else if (areStringsEqual(key_Word, keyNICC)) {
        printf("[]=======================================[]\n");
        printf("Nickname is: %s\n", nick_Name);
        printf("[]=======================================[]\n");
        printf("Favorite Color is: %s\n", favorite_Color);
        printf("[]=======================================[]\n");
    } else if (areStringsEqual(key_Word, keyNIFF)) {
        printf("[]=======================================[]\n");
        printf("Nickname is: %s\n", nick_Name);
        printf("[]=======================================[]\n");
        printf("Favorite Food is: %s\n", favorite_Food);
        printf("[]=======================================[]\n");
        
    } else {
        printf("}========================================={\n");
        printf("||           Invalid Keyword             ||\n");
        printf("}========================================={\n");
    }
}

bool areStringsEqual(const char *str1, const char *str2) {
    return strcmp(str1, str2) == 0;
}


