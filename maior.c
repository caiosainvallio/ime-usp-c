#include<stdio.h>
int main(){
  int maior = -99999, n, valor, i;
  printf("Quantas vezes? \n");
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &valor);
    if(valor > maior) maior = valor;
    printf("A rodada atual é a %d\n", i);
  }
  printf("O maior valor é: %d\n", maior);
  return 0;
}
