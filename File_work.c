#include <stdio.h>
#include <string.h>

// int calculate(int marks){

// }

int main()
{

    FILE *ptr;

    int class;
    char section;
    char name[30];
    char sname[30];
    int hindi;
    int math;
    int computer;
    int telugu;
    int masti;

    printf("Students\n");
    printf("Enter your name: ");
    scanf(" %s",name);

    printf("Enter your class: ");
    scanf("%d",&class);

    printf("Enter your section: ");
    scanf(" %c",&section);

    sprintf(sname,"%s.txt",name);

    ptr = fopen(sname,"w");

    printf("Enter your marks line by line\n");
    printf("Enter your Hindi marks: ");
    scanf("%d", &hindi);

    printf("Enter your Math marks: ");
    scanf("%d", &math);

    printf("Enter your computer marks: ");
    scanf("%d", &computer);

    printf("Enter your Telugu marks: ");
    scanf("%d", &telugu);

    printf("Enter your Masti marks: ");
    scanf("%d", &masti);

    int total = hindi + math + computer + masti + telugu;
    int division = (hindi + math + computer + masti + telugu) / 5;


    // printf("The total marks: %d\n", total);
    // printf("The total marks: %d\n", division);

    fprintf(ptr,"Name: %s\nClass: %d\nSection: %c\n\n",name,class,section);

    fprintf(ptr,"Hindi   : %d\nMath    : %d\nComputer: %d\nTelugu  : %d\nMasti   : %d\n",hindi,math,computer,telugu,masti);
    fprintf(ptr,"------------------\n");
    fprintf(ptr,"Total marks: %d\n",total);
    fprintf(ptr,"Parcentage: %d\n",division);
    fprintf(ptr,"-------------------\n");
    fprintf(ptr,"Thanks for using my code");

    fclose(ptr);

    return 0;
}