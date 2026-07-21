#include <stdio.h>
int main() {
    int n;
    printf("enter your number: ");
    scanf("%d", &n);

    int product = 1;
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    printf("Product of digits: %d\n", product);
    return 0;
}