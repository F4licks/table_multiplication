#include <stdio.h>

int main() {
    int value_multiplication;
    printf("Enter a value to display the multiplication table: ");
    scanf("%d", &value_multiplication);

    for (int i = 0; i<=10; i++) {
        int result = value_multiplication * i;
        printf("%d * %d = %d\n", value_multiplication, i, result);
    }

    return 0;
}