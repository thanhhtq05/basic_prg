#include <stdio.h>
int main() {
    int n;
    printf("your number: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        if (n % i == 0) {
            printf("%d %d ", i, -i);
        }
        i++;
    }

       return 0;
}