#include <stdio.h>
#include <stdlib.h>
int maxi(int num1, int num2, int num3){
    int result;
    if(num1 >= num2 && num1 >= num3 ){
        result = num1;
    }else if(num2 >= num1 && num2 >= num3){
        result = num2;
    }else{
        result = num3;
    }
    return result;
}

int main()
{
    printf("%d\n", maxi(450, 102, 100));
    return 0;
}
