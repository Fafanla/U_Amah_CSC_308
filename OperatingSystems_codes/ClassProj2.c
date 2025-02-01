#include <stdio.h>

int main() {
    char type;
    printf("Enter type (c for char, i for int, f for float): ");
    scanf(" %c", &type);

    switch (type) {
        case 'c': {
            char ch;
            printf("Enter a character: ");
            scanf(" %c", &ch);
            printf("Next four characters in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                printf("%c (ASCII: %d)\n", ch + (i * 3), ch + (i * 3));
            }
            printf("Size of char: %lu bytes\n", sizeof(char));
            break;
        }

        case 'i': {
            int num;
            printf("Enter an integer: ");
            scanf("%d", &num);
            printf("Next four integers in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                printf("%d\n", num + (i * 3));
            }
            printf("Size of int: %lu bytes\n", sizeof(int));
            break;
        }

        case 'f': {
            float num;
            printf("Enter a float: ");
            scanf("%f", &num);
            printf("Next four floats in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                printf("%.2f\n", num + (i * 3));
            }
            printf("Size of float: %lu bytes\n", sizeof(float));
            break;
        }

        default:
            printf("Invalid input type.\n");
    }

    return 0;
}
