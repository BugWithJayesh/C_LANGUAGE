       /* Print multiplication table of a no. entered by the user in pretty form */

#include <stdio.h>

#include <stdio.h>

int main() {
    int num;  // integer variable

    printf("Enter a number: ");
    scanf("%d", &num);   // yahan address-of operator & zaroori hai

    printf("\nMultiplication Table of %d:\n", num);
    printf("=============================\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%2d x %2d = %3d\n", num, i, num * i);
    }

    return 0;
}