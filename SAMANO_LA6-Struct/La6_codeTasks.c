#include <string.h>
#include <stdio.h>
#include <math.h>

struct subjectGrades{
        float prelimGrade;
        float midtermGrade;
        float endtermGrade;
        float finalGrade;
        int creditUnits;
        char subjectName[50];
        char subjectCode[20];
};

void computeGWA(struct subjectGrades *Sub1, struct subjectGrades *Sub2, struct subjectGrades *Sub3, struct subjectGrades *Sub4 ,struct subjectGrades *Sub5, struct subjectGrades *Sub6, struct subjectGrades *Sub7, struct subjectGrades *Sub8);

void computeGWAprelim(struct subjectGrades *Sub1, struct subjectGrades *Sub2, struct subjectGrades *Sub3, struct subjectGrades *Sub4, struct subjectGrades *Sub5, struct subjectGrades *Sub6, struct subjectGrades *Sub7, struct subjectGrades *Sub8);

void computeGWAmidterm(struct subjectGrades *Sub1, struct subjectGrades *Sub2, struct subjectGrades *Sub3, struct subjectGrades *Sub4, struct subjectGrades *Sub5, struct subjectGrades *Sub6, struct subjectGrades *Sub7, struct subjectGrades *Sub8);

void computeGWAendterm(struct subjectGrades *Sub1, struct subjectGrades *Sub2, struct subjectGrades *Sub3, struct subjectGrades *Sub4, struct subjectGrades *Sub5, struct subjectGrades *Sub6, struct subjectGrades *Sub7, struct subjectGrades *Sub8);

void computeGWAfinalgrade(struct subjectGrades *Sub1, struct subjectGrades *Sub2, struct subjectGrades *Sub3, struct subjectGrades *Sub4, struct subjectGrades *Sub5, struct subjectGrades *Sub6, struct subjectGrades *Sub7, struct subjectGrades *Sub8);

int main(){
    int generate = 1;
    char input[2];
    char GWASelection;

    struct subjectGrades sub1;
    struct subjectGrades sub2;
    struct subjectGrades sub3;
    struct subjectGrades sub4;
    struct subjectGrades sub5;
    struct subjectGrades sub6;
    struct subjectGrades sub7;
    struct subjectGrades sub8;

    sub1.prelimGrade = 78;
    sub2.prelimGrade = 81; 
    sub3.prelimGrade = 97.8;
    sub4.prelimGrade = 94;
    sub5.prelimGrade = 85;
    sub6.prelimGrade = 86;
    sub7.prelimGrade = 0;
    sub8.prelimGrade = 87;

    sub1.midtermGrade = 87;
    sub2.midtermGrade = 90;
    sub3.midtermGrade = 98.8;
    sub4.midtermGrade = 95;
    sub5.midtermGrade = 92;
    sub6.midtermGrade = 87;
    sub7.midtermGrade = 0;
    sub8.midtermGrade = 82;

    sub1.endtermGrade = 86;
    sub2.endtermGrade = 87;
    sub3.endtermGrade = 98.1;
    sub4.endtermGrade = 97;
    sub5.endtermGrade = 100;
    sub6.endtermGrade = 90;
    sub7.endtermGrade = 97;
    sub8.endtermGrade = 84;

    sub1.creditUnits = 3;
    sub2.creditUnits = 3;
    sub3.creditUnits = 3;
    sub4.creditUnits = 3;
    sub5.creditUnits = 3;
    sub6.creditUnits = 3;
    sub7.creditUnits = 2;
    sub8.creditUnits = 3;

    strcpy(sub1.subjectCode, "CCC203");
    strcpy(sub2.subjectCode, "GEC103");
    strcpy(sub3.subjectCode, "GEC108");
    strcpy(sub4.subjectCode, "GEC300");
    strcpy(sub5.subjectCode, "GEC313");
    strcpy(sub6.subjectCode, "MS401");
    strcpy(sub7.subjectCode, "PATHFIT2");
    strcpy(sub8.subjectCode, "THEO2");

    strcpy(sub1.subjectName, "Computer Programming 2");
    strcpy(sub2.subjectName, "Contemporary World ");
    strcpy(sub3.subjectName, "Ethics");
    strcpy(sub4.subjectName, "Life and Works of Rizal");
    strcpy(sub5.subjectName, "Entrepreneurial Mind");
    strcpy(sub6.subjectName, "Discrete Mathematics");
    strcpy(sub7.subjectName, "Physical Activity Towards Health and Fitness 2");
    strcpy(sub8.subjectName, "Life of Jesus and The Church");

    while (generate) {
        printf("=========================================\n");
        printf("||<<<<        LA6 Task Code        >>>>||\n");
        printf("=========================================\n");
        printf("||   [1] PRELIM    ||   [2]MIDTERM     ||\n");
        printf("=========================================\n");
        printf("||   [3] ENDTERM   ||   [4]FINAL       ||\n");
        printf("=========================================\n");
        printf("||<<<<      Select GWA TERMS       >>>>||\n");
        printf("=========================================\n");
        printf("\n");
        printf("                Input: ");
        scanf(" %c", &GWASelection);
        printf("\n");

     switch(GWASelection){

        case '1':
        computeGWAprelim(&sub1, &sub2, &sub3, &sub4, &sub5, &sub6, &sub7, &sub8);    
        break;

        case '2':
        computeGWAmidterm(&sub1, &sub2, &sub3, &sub4, &sub5, &sub6, &sub7, &sub8); 
        break;

        case '3':
        computeGWAendterm(&sub1, &sub2, &sub3, &sub4, &sub5, &sub6, &sub7, &sub8);
        break;

        case '4':
        computeGWAfinalgrade(&sub1, &sub2, &sub3, &sub4, &sub5, &sub6, &sub7, &sub8);
        break;
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

void computeGWA(struct subjectGrades *Sub1, struct subjectGrades *Sub2, struct subjectGrades *Sub3, struct subjectGrades *Sub4, struct subjectGrades *Sub5, struct subjectGrades *Sub6, struct subjectGrades *Sub7, struct subjectGrades *Sub8) {

    float Sub1prod = Sub1->midtermGrade * Sub1->creditUnits;
    float Sub2prod = Sub2->midtermGrade * Sub2->creditUnits;
    float Sub3prod = Sub3->midtermGrade * Sub3->creditUnits;
    float Sub4prod = Sub4->midtermGrade * Sub4->creditUnits;
    float Sub5prod = Sub5->midtermGrade * Sub5->creditUnits;
    float Sub6prod = Sub6->midtermGrade * Sub6->creditUnits;
    float Sub8prod = Sub7->midtermGrade * Sub7->creditUnits;
    float Sub9prod = Sub8->midtermGrade * Sub8->creditUnits;

    float totalProd = Sub1prod + Sub2prod + Sub3prod + Sub4prod + Sub5prod + Sub6prod + Sub8prod + Sub9prod;
    float totalCU = Sub1->creditUnits + Sub2->creditUnits + Sub3->creditUnits + Sub4->creditUnits + Sub5->creditUnits + Sub6->creditUnits + Sub7->creditUnits + Sub8->creditUnits;

    float GWA = totalProd / totalCU;

    printf("%.2f", GWA);
}

void computeGWAprelim(struct subjectGrades *Sub1, struct subjectGrades *Sub2, struct subjectGrades *Sub3, struct subjectGrades *Sub4, struct subjectGrades *Sub5, struct subjectGrades *Sub6, struct subjectGrades *Sub7, struct subjectGrades *Sub8){

    float Sub1prod = Sub1->prelimGrade * Sub1->creditUnits;
    float Sub2prod = Sub2->prelimGrade * Sub2->creditUnits;
    float Sub3prod = Sub3->prelimGrade * Sub3->creditUnits;
    float Sub4prod = Sub4->prelimGrade * Sub4->creditUnits;
    float Sub5prod = Sub5->prelimGrade * Sub5->creditUnits;
    float Sub6prod = Sub6->prelimGrade * Sub6->creditUnits;
    float Sub7prod = Sub7->prelimGrade * Sub7->creditUnits;
    float Sub8prod = Sub8->prelimGrade * Sub8->creditUnits;

    float totalProd = Sub1prod + Sub2prod + Sub3prod + Sub4prod + Sub5prod + Sub6prod + Sub7prod + Sub8prod;
    float totalCU = Sub1->creditUnits + Sub2->creditUnits + Sub3->creditUnits + Sub4->creditUnits + Sub5->creditUnits + Sub6->creditUnits + Sub7->creditUnits + Sub8->creditUnits;

    float GWA = totalProd / totalCU;

    printf("\n[[================================================================================================]]");
    printf("\n|| SubjectCode   || SubjectName                                      || CreditUnits   || Prelim   ||      ");
    printf("\n[[================================================================================================]]");
    printf("\n|| %s        || %s                           ||       %d       || %.2f    ||", Sub1->subjectCode, Sub1->subjectName, Sub1->creditUnits, Sub1->prelimGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s        || %s                              ||       %d       || %.2f    ||", Sub2->subjectCode, Sub2->subjectName, Sub2->creditUnits, Sub2->prelimGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s        || %s                                           ||       %d       || %.2f    ||", Sub3->subjectCode, Sub3->subjectName, Sub3->creditUnits, Sub3->prelimGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s        || %s                          ||       %d       || %.2f    ||", Sub4->subjectCode, Sub4->subjectName, Sub4->creditUnits, Sub4->prelimGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s        || %s                             ||       %d       || %.2f    ||", Sub5->subjectCode, Sub5->subjectName, Sub5->creditUnits, Sub5->prelimGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s         || %s                             ||       %d       || %.2f    ||", Sub6->subjectCode, Sub6->subjectName, Sub6->creditUnits, Sub6->prelimGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s      || %s   ||       %d       || %.2f     ||", Sub7->subjectCode, Sub7->subjectName, Sub7->creditUnits, Sub7->prelimGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s         || %s                     ||       %d       || %.2f    ||", Sub8->subjectCode, Sub8->subjectName, Sub8->creditUnits, Sub8->prelimGrade);
    printf("\n[[================================================================================================]]");
    printf("\n||                                 Prelim GWA: %.2f                                              ||", GWA);
    printf("\n[[================================================================================================]]");
    printf("\n");    
}

void computeGWAmidterm(struct subjectGrades *Sub1, struct subjectGrades *Sub2, struct subjectGrades *Sub3, struct subjectGrades *Sub4, struct subjectGrades *Sub5, struct subjectGrades *Sub6, struct subjectGrades *Sub7, struct subjectGrades *Sub8){

    float Sub1prod = Sub1->midtermGrade * Sub1->creditUnits;
    float Sub2prod = Sub2->midtermGrade * Sub2->creditUnits;
    float Sub3prod = Sub3->midtermGrade * Sub3->creditUnits;
    float Sub4prod = Sub4->midtermGrade * Sub4->creditUnits;
    float Sub5prod = Sub5->midtermGrade * Sub5->creditUnits;
    float Sub6prod = Sub6->midtermGrade * Sub6->creditUnits;
    float Sub7prod = Sub7->midtermGrade * Sub7->creditUnits;
    float Sub8prod = Sub8->midtermGrade * Sub8->creditUnits;

    float totalProd = Sub1prod + Sub2prod + Sub3prod + Sub4prod + Sub5prod + Sub6prod + Sub7prod + Sub8prod;
    float totalCU = Sub1->creditUnits + Sub2->creditUnits + Sub3->creditUnits + Sub4->creditUnits + Sub5->creditUnits + Sub6->creditUnits + Sub7->creditUnits + Sub8->creditUnits;

    float GWA = totalProd / totalCU;

    printf("\n[[================================================================================================]]");
    printf("\n|| SubjectCode   || SubjectName                                      || CreditUnits   || Midterm  ||      ");
    printf("\n[[================================================================================================]]");
    printf("\n|| %s        || %s                           ||       %d       || %.2f    ||", Sub1->subjectCode, Sub1->subjectName, Sub1->creditUnits, Sub1->midtermGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s        || %s                              ||       %d       || %.2f    ||", Sub2->subjectCode, Sub2->subjectName, Sub2->creditUnits, Sub2->midtermGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s        || %s                                           ||       %d       || %.2f    ||", Sub3->subjectCode, Sub3->subjectName, Sub3->creditUnits, Sub3->midtermGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s        || %s                          ||       %d       || %.2f    ||", Sub4->subjectCode, Sub4->subjectName, Sub4->creditUnits, Sub4->midtermGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s        || %s                             ||       %d       || %.2f    ||", Sub5->subjectCode, Sub5->subjectName, Sub5->creditUnits, Sub5->midtermGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s         || %s                             ||       %d       || %.2f    ||", Sub6->subjectCode, Sub6->subjectName, Sub6->creditUnits, Sub6->midtermGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s      || %s   ||       %d       || %.2f     ||", Sub7->subjectCode, Sub7->subjectName, Sub7->creditUnits, Sub7->prelimGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s         || %s                     ||       %d       || %.2f    ||", Sub8->subjectCode, Sub8->subjectName, Sub8->creditUnits, Sub8->midtermGrade);
    printf("\n[[================================================================================================]]");
    printf("\n||                                 Midterm GWA: %.2f                                             ||", GWA);
    printf("\n[[================================================================================================]]");
    printf("\n");    
}

void computeGWAendterm(struct subjectGrades *Sub1, struct subjectGrades *Sub2, struct subjectGrades *Sub3, struct subjectGrades *Sub4, struct subjectGrades *Sub5, struct subjectGrades *Sub6, struct subjectGrades *Sub7, struct subjectGrades *Sub8){

    float Sub1prod = Sub1->endtermGrade * Sub1->creditUnits;
    float Sub2prod = Sub2->endtermGrade * Sub2->creditUnits;
    float Sub3prod = Sub3->endtermGrade * Sub3->creditUnits;
    float Sub4prod = Sub4->endtermGrade * Sub4->creditUnits;
    float Sub5prod = Sub5->endtermGrade * Sub5->creditUnits;
    float Sub6prod = Sub6->endtermGrade * Sub6->creditUnits;
    float Sub7prod = Sub7->endtermGrade * Sub7->creditUnits;
    float Sub8prod = Sub8->endtermGrade * Sub8->creditUnits;

    float totalProd = Sub1prod + Sub2prod + Sub3prod + Sub4prod + Sub5prod + Sub6prod + Sub7prod + Sub8prod;
    float totalCU = Sub1->creditUnits + Sub2->creditUnits + Sub3->creditUnits + Sub4->creditUnits + Sub5->creditUnits + Sub6->creditUnits + Sub7->creditUnits + Sub8->creditUnits;

    float GWA = totalProd / totalCU;

    printf("\n[[================================================================================================]]");
    printf("\n|| SubjectCode   || SubjectName                                      || CreditUnits   || Endterm  ||      ");
    printf("\n[[================================================================================================]]");
    printf("\n|| %s        || %s                           ||       %d       || %.2f    ||", Sub1->subjectCode, Sub1->subjectName, Sub1->creditUnits, Sub1->endtermGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s        || %s                              ||       %d       || %.2f    ||", Sub2->subjectCode, Sub2->subjectName, Sub2->creditUnits, Sub2->endtermGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s        || %s                                           ||       %d       || %.2f    ||", Sub3->subjectCode, Sub3->subjectName, Sub3->creditUnits, Sub3->endtermGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s        || %s                          ||       %d       || %.2f    ||", Sub4->subjectCode, Sub4->subjectName, Sub4->creditUnits, Sub4->endtermGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s        || %s                             ||       %d       || %.2f   ||", Sub5->subjectCode, Sub5->subjectName, Sub5->creditUnits, Sub5->endtermGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s         || %s                             ||       %d       || %.2f    ||", Sub6->subjectCode, Sub6->subjectName, Sub6->creditUnits, Sub6->endtermGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s      || %s   ||       %d       || %.2f    ||", Sub7->subjectCode, Sub7->subjectName, Sub7->creditUnits, Sub7->endtermGrade);
    printf("\n[[================================================================================================]]");
    printf("\n|| %s         || %s                     ||       %d       || %.2f    ||", Sub8->subjectCode, Sub8->subjectName, Sub8->creditUnits, Sub8->endtermGrade);
    printf("\n[[================================================================================================]]");
    printf("\n||                                 Endterm GWA: %.2f                                             ||", GWA);
    printf("\n[[================================================================================================]]");
    printf("\n");    
}

void computeGWAfinalgrade(struct subjectGrades *Sub1, struct subjectGrades *Sub2, struct subjectGrades *Sub3, struct subjectGrades *Sub4, struct subjectGrades *Sub5, struct subjectGrades *Sub6, struct subjectGrades *Sub7, struct subjectGrades *Sub8){
    //final grade = .30 * prelim + .30 * midterm + .40 endterm 
    //toaltal weighted units = final grade * credunits
    float Sub1finalprod = 0.30 * Sub1->prelimGrade + 0.30 * Sub1->midtermGrade + 0.40 * Sub1->endtermGrade;
    float Sub2finalprod = 0.30 * Sub2->prelimGrade + 0.30 * Sub2->midtermGrade + 0.40 * Sub2->endtermGrade;
    float Sub3finalprod = 0.30 * Sub3->prelimGrade + 0.30 * Sub3->midtermGrade + 0.40 * Sub3->endtermGrade;
    float Sub4finalprod = (Sub4->prelimGrade * 0.3) + (Sub4->midtermGrade * 0.3) + (Sub4->endtermGrade * 0.4);
    float Sub5finalprod = (Sub5->prelimGrade * 0.3) + (Sub5->midtermGrade * 0.3) + (Sub5->endtermGrade * 0.4);
    float Sub6finalprod = (Sub6->prelimGrade * 0.3) + (Sub6->midtermGrade * 0.3) + (Sub6->endtermGrade * 0.4);
    //sub 7 breaks the formula as there is no prelim and midterm grade
    float Sub8finalprod = (Sub8->prelimGrade * 0.3) + (Sub8->midtermGrade * 0.3) + (Sub8->endtermGrade * 0.4);

    float Sub1prod = Sub1finalprod * Sub1->creditUnits;
    float Sub2prod = Sub2finalprod * Sub2->creditUnits;
    float Sub3prod = Sub3finalprod * Sub3->creditUnits;
    float Sub4prod = Sub4finalprod * Sub4->creditUnits;
    float Sub5prod = Sub5finalprod * Sub5->creditUnits;
    float Sub6prod = Sub6finalprod * Sub6->creditUnits;
    float Sub7prod = Sub7->endtermGrade * Sub7->creditUnits;
    float Sub8prod = Sub8finalprod * Sub8->creditUnits;

    float totalProd = Sub1prod + Sub2prod + Sub3prod + Sub4prod + Sub5prod + Sub6prod + Sub7prod + Sub8prod;
    float totalCU = Sub1->creditUnits + Sub2->creditUnits + Sub3->creditUnits + Sub4->creditUnits + Sub5->creditUnits + Sub6->creditUnits + Sub7->creditUnits + Sub8->creditUnits;

    float Sub1Div = Sub1prod / Sub1->creditUnits;
    float Sub2Div = Sub2prod / Sub2->creditUnits;
    float Sub3Div = Sub3prod / Sub3->creditUnits;
    float Sub4Div = Sub4prod / Sub4->creditUnits;
    float Sub5Div = Sub5prod / Sub5->creditUnits;
    float Sub6Div = Sub6prod / Sub6->creditUnits;
    float Sub8Div = Sub8prod / Sub8->creditUnits;

    float Sub1rounded = Sub1Div;
    float Sub2rounded = Sub2Div;
    float Sub3rounded = Sub3Div;
    float Sub4rounded = Sub4Div;
    float Sub5rounded = Sub5Div;
    float Sub6rounded = Sub6Div;
    float Sub7rounded = Sub7->endtermGrade;
    float Sub8rounded = Sub8Div;

    float GWA = totalProd / totalCU;

    

    printf("\n[[==========================================================================================================================================]]");
    printf("\n|| SubjectCode   || SubjectName                                      || CreditUnits   || Prelim   || Midterm   || Endterm   || Final Grade  || ");
    printf("\n[[==========================================================================================================================================]]");
    printf("\n|| %s        || %s                           ||       %d       || %.2f    || %.2f     || %.2f     ||     %.2f    ||", Sub1->subjectCode, Sub1->subjectName, Sub1->creditUnits, Sub1->prelimGrade, Sub1->midtermGrade, Sub1->endtermGrade, Sub1rounded);
    printf("\n[[==========================================================================================================================================]]");
    printf("\n|| %s        || %s                              ||       %d       || %.2f    || %.2f     || %.2f     ||     %.2f    ||", Sub2->subjectCode, Sub2->subjectName, Sub2->creditUnits, Sub2->prelimGrade, Sub2->midtermGrade, Sub2->endtermGrade, Sub2rounded);
    printf("\n[[==========================================================================================================================================]]");
    printf("\n|| %s        || %s                                           ||       %d       || %.2f    || %.2f     || %.2f     ||     %.2f    ||", Sub3->subjectCode, Sub3->subjectName, Sub3->creditUnits, Sub3->prelimGrade, Sub3->midtermGrade, Sub3->endtermGrade, Sub3rounded);
    printf("\n[[==========================================================================================================================================]]");
    printf("\n|| %s        || %s                          ||       %d       || %.2f    || %.2f     || %.2f     ||     %.2f    ||", Sub4->subjectCode, Sub4->subjectName, Sub4->creditUnits, Sub4->prelimGrade, Sub4->midtermGrade, Sub4->endtermGrade, Sub4rounded);
    printf("\n[[==========================================================================================================================================]]");
    printf("\n|| %s        || %s                             ||       %d       || %.2f    || %.2f     || %.2f    ||     %.2f    ||", Sub5->subjectCode, Sub5->subjectName, Sub5->creditUnits, Sub5->prelimGrade, Sub5->midtermGrade, Sub5->endtermGrade, Sub5rounded);
    printf("\n[[==========================================================================================================================================]]");
    printf("\n|| %s         || %s                             ||       %d       || %.2f    || %.2f     || %.2f     ||     %.2f    ||", Sub6->subjectCode, Sub6->subjectName, Sub6->creditUnits, Sub6->prelimGrade, Sub6->midtermGrade, Sub6->endtermGrade, Sub6rounded);
    printf("\n[[==========================================================================================================================================]]");
    printf("\n|| %s      || %s   ||       %d       || %.2f     || %.2f      || %.2f     ||     %.2f    ||", Sub7->subjectCode, Sub7->subjectName, Sub7->creditUnits, Sub7->prelimGrade, Sub7->midtermGrade, Sub7->endtermGrade, Sub7rounded);
    printf("\n[[==========================================================================================================================================]]");
    printf("\n|| %s         || %s                     ||       %d       || %.2f    || %.2f     || %.2f     ||     %.2f    ||", Sub8->subjectCode, Sub8->subjectName, Sub8->creditUnits, Sub8->prelimGrade, Sub8->midtermGrade, Sub8->endtermGrade, Sub8rounded);
    printf("\n[[==========================================================================================================================================]]");
    printf("\n||                                                         Final GWA: %.2f                                                                 ||", GWA);
    printf("\n[[==========================================================================================================================================]]");
    printf("\n");
}
    