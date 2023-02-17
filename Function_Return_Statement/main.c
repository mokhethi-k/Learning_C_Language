#include <stdio.h>
#include <stdlib.h>

int Cube(int num){
    int result = num * num * num;
    return result;
}

int main()
{
    printf("Hello world!\n");
    printf("\nThe cube of a given number is %d.\n",Cube(7));
    return 0;
}
