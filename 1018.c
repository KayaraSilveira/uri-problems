#include <stdio.h>

int main () {

    int valor, aux, cem, cinq, vint, dez, cinc, dois, um;
    scanf("%d",&valor);
    aux = valor; // armazena o valor em uma variavel auxiliar
    cem = aux/100; // descobre quantas cedulas de 100 possui
    aux = aux - (cem * 100); // diminui o valor do valor total
    cinq = aux/50; // repete o processo com as proximas
    aux = aux - (cinq * 50);
    vint = aux/20;
    aux = aux - (vint * 20);
    dez = aux/10;
    aux = aux - (dez * 10);
    cinc = aux/5;
    aux = aux - (cinc * 5);
    dois = aux/2;
    aux = aux - (dois * 2);
    um = aux; // atribui o que sobrou as cedulas de 1
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",valor, cem, cinc, vint, dez, cinc, dois, um);

    return 0;
}