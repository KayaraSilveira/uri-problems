#include <stdio.h> 

int main () {
    int c1, n1, c2, n2;
    float v1, v2, total;
    scanf ("%d %d %f",&c1, &n1, &v1);
    scanf ("%d %d %f",&c2, &n2, &v2);
    total = (n1*v1)+(n2*v2);
    printf ("VALOR A PAGAR: R$ %0.2f\n", total);

    return 0;
}