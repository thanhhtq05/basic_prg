// Exercise 5: Write a C program to calculate a value of a polynomial 𝑎𝑥2 + 𝑏𝑥 + 𝑐 
// with three known constant parameters a=1, b=2, and c=1 and the variable 𝑥 input 
// from the keyboard. 

#include <stdio.h>
int main() {
    int a = 1, b = 2, c = 1;
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("P(x) = %d\n", a*x*x + b*x + c);
    
    return 0;
}