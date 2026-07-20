#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    float sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum += 1.0 / (n - i);
    }
    printf("The sum is: %f\n", sum);
    return 0;
}