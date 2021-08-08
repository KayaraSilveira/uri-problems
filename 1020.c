#include <stdio.h> 

int main () {

    int idade, aux, ano, mes, dia;
    scanf("%d",&idade);
    aux = idade; // atribui a idade a uma auxiliar
    ano = aux/365; // calcula quantos anos
    aux = aux - (ano * 365); // diminui esse valor do valor total
    mes = aux/30; // repete com o mes
    aux = aux - (mes * 30);
    dia = aux; // atribui o restante aos dias
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano, mes, dia);

    return 0;
}