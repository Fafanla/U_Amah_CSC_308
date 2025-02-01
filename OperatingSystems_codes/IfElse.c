#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if the number is less than 0
    if (number < 0) {
        printf("You entered a negative number: %d\n", number);
    } else {
        printf("Number is not negative: %d\n", number);
    }

    return 0;
}
