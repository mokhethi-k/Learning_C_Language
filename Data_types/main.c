#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Integers are whole numbers without a decimal point
    int num = 40;
    printf("\n%d\n",num);
    //Floating point numbers are numbers with a decimal point
    float weight = 65.5f;
    printf("\n%f\n",weight);
    //doubles are numbers with a decimal point but they have more precision that floating point numbers
    double acc = 75.6;
    printf("\n%f\n",acc);
    //Single characters are char type data that are enclosed in a single quotation marks
    char alp = 'A';
    printf("\n%c\n",alp);
    //A string is another type of char data type but if stores multiple characters enclosed in double quotation marks
    char name[]= "Kabelo Mokhethi";
    printf("\n%s\n",name);
    return 0;
}
