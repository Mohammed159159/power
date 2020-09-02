#include<stdio.h>

int power(float base, int index);

int main() {

    int a, b;
    printf("Enter a :");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);
    power(a, b);
    printf(" \n");
    power(a, -b);
}

int power(float base, int index) {
    double result = 1;

    if (index > 0)
    {
        while (index != 0) {
            result *= base;
            --index;
        }
        printf("a^b = %lf", result);
    }
    else if (index < 0) {

        while (index != 0) {
            result *= 1 / base;
            ++index;
        }
        printf("a^-b = %lf", result);
    }
    else printf("a^b = 1");
}
