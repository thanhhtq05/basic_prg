// Exercise 1: Write a C program to convert a temperature form Centigrade to Fahrenheit.

#include <stdio.h>
int main() {
    int c;
    printf("Celsius: ");
    scanf("%d", &c);
    int f = 32 + 9*c/5;
    printf("Fahrenheit: %d\n", f);
}