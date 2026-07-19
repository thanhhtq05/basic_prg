#include <stdio.h>
#include <math.h>
int main() {
    int a;
    printf("a = ");
    scanf("%d", &a);
    
    int b;
    printf("b = ");
    scanf("%d", &b);

    int c;
    printf("c = ");
    scanf("%d", &c); 

    int eq = 3*a - pow(b, 3) -2*sqrt(c);
    printf("the value : %d\n", eq);
    
    return 0;


}
