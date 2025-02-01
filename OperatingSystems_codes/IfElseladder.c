#include <stdio.h>

int main() {
    int number1, number2;

    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // Checks if the two integers are equal
    if (number1 == number2) {
        printf("Both numbers are equal: %d = %d\n", number1, number2);
    }
    // Checks if number1 is greater than number2
    else if (number1 > number2) {
        printf("First number is greater: %d > %d\n", number1, number2);
    }
    // If both test expressions are false, number2 is greater
    else {
        printf("Second number is greater: %d < %d\n", number1, number2);
    }

    return 0;
}
