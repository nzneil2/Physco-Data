
#include <stdio.h>

int main(){

    double num1 = 0;

    double num2 = 0;

    int choice;

    printf("Choose from these Functions: \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");

    scanf("%lf %d %lf",&num1, &choice, &num2);


switch(choice) {
    case 1:
        printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
        break;

    case 2:
        printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
        break;

    case 3:
        printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
        break;

    case 4:
        printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
        break;

    default:printf("Invalid input");
        break;
    }
    return 0;
}
