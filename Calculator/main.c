#include <stdio.h>
#include <stdlib.h>

Calculate(double num1, double num2, char sign){

    double result;
    if(sign == '+'){
        printf("\nThis is an addition operation.\n");
        result = num1 + num2;
    }else if(sign == '-'){
        printf("\nThis is a subtraction operation.\n");
        result = num1 - num2;
    }else if(sign == '*'){
        printf("\nThis is a multiplication operation.\n");
        result = num1 * num2;
    }else if(sign == '/'){
        printf("\nThis is a division operation.\n");
        result = num1/num2;
    }else{
        printf("\nPlease enter a valid Operator!!\n");
    }

    return result;

}

int main()
{
    double num1, num2;
    char oprt;

    printf("\nEnter first number: ");
    scanf("%lf",&num1);
    printf("\nEnter operation sign: ");
    scanf(" %c",&oprt);
    printf("\nEnter second number: ");
    scanf("%lf",&num2);

    double ans = Calculate(num1, num2, oprt);

    printf("The answer is: %f\n",ans);

    return 0;
}
