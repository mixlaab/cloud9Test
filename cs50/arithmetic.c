#include<cs50.h>
#include<stdio.h>

int main(void)
{
    //Ask the user for inputs
    int a = get_int("Type the first integer: ");
    int b = get_int("Type the second integer: ");

    //Shows output
    printf("%i plus %i is %i\n", a, b, a + b);
    printf("%i minus %i is %i\n", a, b, a - b);
    printf("%i times %i is %i\n", a, b, a * b);
    printf("The remainder of %i divided by %i is %i\n", a, b, a % b);
}