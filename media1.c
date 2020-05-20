#include<stdio.h>
int main(){
  int i, n;
  float valor, soma = 0, media;
  printf("Quantos dias? ");
  scanf("%d", &n);
  for(i=1; i<=n; i++){
    printf("Entre com o valor do %do. dia: ", i);
    scanf("%f", &valor);
    soma = soma + valor;
  }
  media = soma / n;
  printf("A média é: %.2f\n", media);
  return 0;
}
