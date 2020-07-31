#include <stdio.h> 
#include <math.h>
#define n 3.14159

int main () {
    
    double raio, A;
    scanf("%lf", &raio);
    A = n * (pow(raio,2));
    printf("A=%0.4lf\n",A);

return 0;
}