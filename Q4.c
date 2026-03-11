#include <stdio.h>
#include <math.h>

double calculate_expression(double a, double b) {
    return pow(a, 3) + 3 * pow(a, 2) * b + 3 * a * pow(b, 2) + pow(b, 3);
}

int main() {
    double a, b, c;

    printf("Enter value for a: ");
    scanf("%lf", &a);
    printf("Enter value for b: ");
    scanf("%lf", &b);
    printf("Enter value for c: ");
    scanf("%lf", &c);

    double result = calculate_expression(a, b);

    printf("The result of the expression is: %.2lf\n", result);

    return 0;
}
