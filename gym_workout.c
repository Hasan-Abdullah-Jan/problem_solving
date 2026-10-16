#include <stdio.h>

int main()
{
    int pin;
    int calories = 0;
    int total_calories = 0;
    int counter;

    do {
        printf("Enter your pin: ");
        scanf("%d", &pin);
        if (pin != 1234) {
            printf("Incorrect pin, please try again.\n");
        }
    } while (pin != 1234);

    while (total_calories < 500) {
        printf("Enter calories Burnt in the sprint: ");
        scanf("%d", &calories);
        total_calories += calories;
    }

    printf("You have burnt enough calories!\n");

    for (counter = 10; counter > 0; counter--) {
        printf("%d\n", counter);
    }

    printf("Workout complete!\n");

    return 0;
}