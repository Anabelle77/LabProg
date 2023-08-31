//Escrever um algoritmo que lê 5 valores, e conta quantos destes valores são negativos, escrevendo esta informação.
#include<stdio.h>
#include<stdlib.h>
int main(){
  int numero, big, nbig, cont, neg=0;
  for (cont=0; cont < 5; cont++){
    printf("\nDigite um numero inteiro: ");
    scanf("%d",&numero);
    if (numero<0)
      neg++;
    if(numero>big || cont == 0)
    {
      big = numero;
    }
    if(numero<nbig || cont == 0)
    {
      nbig = numero;
    }
  }
  printf("\nO numero de valores negativos eh %d\nE o maior eh: %d\nE o menor eh: %d",neg,big,nbig);
  return 0;
}