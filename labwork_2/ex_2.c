// Exercise 2: Given three numbers and write a C program to find the minimum and the maximum 
// among these numbers


#include <stdio.h>
int main() {
    int n1;
    printf("Enter the first number: ");
    scanf("%d", &n1);

    int n2;
    printf("Enter the second number: ");
    scanf("%d", &n2);

    int n3;
    printf("Enter the third number: ");
    scanf("%d", &n3);

    int min = n1;
    if (n2 < min) {
        min = n2;
    }
    if (n3 < min) {
        min = n3;
    }

    printf("Minimum: %d\n", min);
}