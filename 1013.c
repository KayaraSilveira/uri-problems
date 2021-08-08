#include <stdio.h>

int main () {

    int a, b, c, maior;
    scanf("%d %d %d",&a, &b, &c); 
    maior = (a + b + abs(a - b))/2; //calcula qual o maior entre a e b
    maior = (c + maior + abs(c - maior))/2; // calcula qual o maior entre o resultado de cima e c
    printf ("%d eh o maior\n",maior);

    return 0;
}