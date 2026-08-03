#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Rule 1: Positive Number\n");

        if (num % 2 == 0)
            printf("Rule 2: Even Number\n");
        else
            printf("Rule 2: Odd Number\n");

        if (num % 5 == 0)
            printf("Rule 3: Divisible by 5\n");
        else
            printf("Rule 3: Not Divisible by 5\n");
    } else {
        printf("Rule Failed: Number must be positive.\n");
    }

    return 0;
}
