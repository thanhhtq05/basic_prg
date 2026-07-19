#include <stdio.h>
int main() {
    printf("the first equation is : ax + by =c");
    
    int a, b, c;
    printf("\na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("the second equation is : dx + ey =f");
    
    int d, e, f;
    printf("\nd: ");
    scanf("%d", &d);
    printf("e: ");
    scanf("%d", &e);
    printf("f: ");
    scanf("%d", &f);

    int y = (f*a - d*c) / (e*a - d*b);
    int x = (c - b*y) / a;
    printf("the solution is : x = %d, y = %d\n", x, y);

    return 0;
}