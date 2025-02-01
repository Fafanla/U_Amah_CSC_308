#include <stdio.h>

int main() {
    int first_int, second_int;

    printf("Enter first integer: ");
    scanf("%d", &first_int);

    printf("Enter second integer: ");
    scanf("%d", &second_int);

    // Check if the second integer is zero to avoid division by zero
    if (second_int != 0) {
        printf("Output = %d\n", first_int / second_int);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
