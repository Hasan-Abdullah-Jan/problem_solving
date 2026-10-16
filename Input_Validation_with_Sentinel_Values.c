#include <stdio.h>

int main()
{
    int input;
    int temp = 0;

    printf("Enter numbers to find the greatest (enter -1 to stop): ");
    scanf("%d", &input);

    while (input != -1) {
        if (input > 0 && input > temp) {
            temp = input;
        }

        printf("Enter numbers to find the greatest (enter -1 to stop): ");
        scanf("%d", &input);
    }

    printf("The greatest number is: %d\n", temp);

    return 0;
}