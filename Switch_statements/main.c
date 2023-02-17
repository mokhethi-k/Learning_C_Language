#include <stdio.h>
#include <stdlib.h>

/*
########################################################################################
            switch statement can be used for multiple decision making structure
            just like if else statement but it is cleaner than if else statement.
########################################################################################
*/

void check_grade(char grade){
    switch(grade){
        case 'A':
             printf("\nYou got 80-89%.\n");
             break;

        case 'B':
            printf("\nYou got 70-79%.\n");
            break;

        case 'C':
            printf("\nYou got 60-69%.\n");
            break;

        case 'D':
            printf("\nYou got 50-59%.\n.");
            break;

        case 'E':
            printf("\nYou failed horribly!!!");
            break;

        default:
            printf("\nYou probably didn\'t enter a valid grade.\n");
            break;
    }
}

int main()
{
    int grade;
    printf("\nPlease enter a grade to be checked:");
    scanf(" %c",&grade);// Leave a space behind format specifier to be able to take char as an input.
    check_grade(toupper(grade));
    return 0;
}
