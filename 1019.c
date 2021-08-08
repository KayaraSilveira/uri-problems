#include <stdio.h>

int main () {

    int n, aux, h, m, s;
    scanf("%d",&n);
    aux = n; //usa uma variavel auxiliar pra armazenar o valor
    h = aux/3600; // descobre quantas horas
    aux = aux - (h * 3600); // diminui essas horas do valor total
    m = aux/60; // descobre quantos minutos
    aux = aux - (m * 60); // diminui esses minutos do valor total
    s = aux; // coloca o resto nos segundos
    printf("%d:%d:%d\n",h, m, s);



    return 0;
}