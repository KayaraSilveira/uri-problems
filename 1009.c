#include <stdio.h> 

int main () {

    int i = 0;
    char nome [20], c;
    double salario, vendas, total;
    scanf("%s",nome);
    scanf ("%lf",&salario);
    scanf("%lf",&vendas);
    total = salario + (vendas*0.15);
    printf("TOTAL = R$ %0.2lf\n",total);

    return 0;
}