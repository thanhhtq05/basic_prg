#include <stdio.h>
int main() {
    int a;
    printf("radius : ");
    scanf("%d", &a);
    
    printf("Your area of a circle is: %f\n", 3.14 * a * a);
    printf("Your circumference of a circle is: %f\n", 2 * 3.14 * a);


    return 0;
}