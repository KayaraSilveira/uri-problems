#include <stdio.h> 

int main () {

    int t, v, aux;
    float litros;
    scanf("%d",&t);
    scanf("%d",&v);
    aux = t * v; // descobre quantos km percorreram
    litros = (float)aux/12; //calcula quantos litros gastaram    o "(float)"" foi para transformar nosso aux int em float para poder efetuar a divisão 
    printf("%.3f\n",litros);

    return 0;
}