#include<stdio.h>
int main(){
  int i, soma, produto, inicial, final, aux;
  scanf("%d %d", &inicial, &final);
  soma = 0;
  produto = 1;
  if(final < inicial){
    aux = inicial;
    inicial = final;
    final = aux;
  }
  if(inicial == 0) inicial++;

  for(i=inicial; i<=final; i++){
    soma = soma + i;
    produto = produto * i;
  }
  printf("A soma de %d a %d é igual a %d.\n", inicial, final, soma);
  printf("O produto acumulado de %d a %d é %d.\n", inicial, final, produto);
  return 0;
}
