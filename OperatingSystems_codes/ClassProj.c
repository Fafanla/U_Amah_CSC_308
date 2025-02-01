#include <stdio.h>

int main() {
    int experience, age;
    int salary;

    
    printf("Enter experience (1 for experienced, 0 for inexperienced): ");
    scanf("%d", &experience);
    
    printf("Enter age: ");
    scanf("%d", &age);

    
    if (experience == 1) {  
        if (age >= 40) {
            salary = 560000;
        } else if (age >= 30) {
            salary = 480000;
        } else if (age < 28) {
            salary = 300000;
        } else {
            salary = 0;  
        }
    } else {  
        salary = 100000;
    }

    
    printf("The salary is: N%d\n", salary);

    return 0;
}
