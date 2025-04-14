#include <stdio.h>

void calci(int a, int b, char op) {
    int c;
    switch (op) {
        case '+':
            c = a + b;
            printf("Result of %d + %d = %d\n", a, b, c);
            break;
        case '-':
            c = a - b;
            printf("Result of %d - %d = %d\n", a, b, c);
            break;
        case '*':
            c = a * b;
            printf("Result of %d * %d = %d\n", a, b, c);
            break;
        case '/':
            if (b != 0) {
                c = a / b;
                printf("Result of %d / %d = %d\n", a, b, c);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }
}

int main() {
    int a = 2;
    int b = 4;

    // Test different operators
    calci(a, b, '+');
    calci(a, b, '-');
    calci(a, b, '*');
    calci(a, b, '/');

    return 0;
}
