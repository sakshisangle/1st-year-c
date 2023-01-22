#include <stdio.h>
int main() {
    int number;

    printf("Enter an number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("You number %d.\n", number);
    }

    printf("The if statement is easy.");

}
