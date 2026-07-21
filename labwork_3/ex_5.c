#include <stdio.h>
int main() {
    int n;
    printf("enter your number: ");
    scanf("%d", &n);

    int n1 = 0;
    int n2 = 1;
    int n3;
    for (int i = 1; i <= n; i++) {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}