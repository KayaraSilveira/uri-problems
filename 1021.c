#include <stdio.h> 

int main () {

    float valor, aux2, aux;
    int cem, cinq, vint, dez, cinc, dois, m100, m50, m25, m10, m5, m1;
    scanf("%f",&valor);
    aux = valor; 
    cem = aux/100; 
    aux = aux - (cem * 100);
    cinq = aux/50; 
    aux = aux - (cinq * 50);
    vint = aux/20;
    aux = aux - (vint * 20);
    dez = aux/10;
    aux = aux - (dez * 10);
    cinc = aux/5;
    aux = aux - (cinc * 5);
    dois = aux/2;
    aux = aux - (dois * 2);
    aux2 = valor - aux;
    m100 = aux2/1;
    aux2 = aux2 - (m100 * 1);
    m50 = aux2/0.5;
    aux2 = aux2 - (m50 * 0.5);
    m25 = aux2/0.25;
    aux2 = aux2 - (m25 * 0.25);
    m10 = aux2/0.1;
    aux2 = aux2 - (m10 * 0.10);
    m5 = aux2/0.05;
    aux2 = aux2 - (m5 * 0.05);
    m1 = aux2;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",valor, cem, cinc, vint, dez, cinc, dois);
    printf("MOEDAS:\n%d moedas(s) de R$ 1.00\n%d moedas(s) de R$ 0.50\n%d moedas(s) de R$ 0.25\n%d moedas(s) de R$ 0.10\n%d moedas(s) de R$ 0.05\n%d moedas(s) de R$ 0.01\n", m100, m50, m25, m10, m5, m1);
    return 0;
}