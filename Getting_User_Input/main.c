#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    char full_name[50];
    /*printf("Please enter your name:");
    scanf("%s",name);// scanf ingores everything that comes after space
    printf("\nYour name is %s.\n",name);
    */
    printf("\nPlease enter your full name:");
    fgets(full_name,50,stdin);
    printf("\nYour full name is %s.",full_name);
    return 0;
}
