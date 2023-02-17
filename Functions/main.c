#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("This gets printed first.\n");
    sayHi();
    printf("\nThis gets printed last.\n");

    char first[] = "Kabelo";
    char last[] = "Mokhethi";
    fromMain(first,last);

    return 0;
}

void sayHi(){
    printf("\nHello Kabelo  Mokhethi from the Function call.\n");

}
fromMain(char First_name[], char Last_name[]){
    printf("\nYour first name is %s and your last name is %s\n", First_name, Last_name);

}
