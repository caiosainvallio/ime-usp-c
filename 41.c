#include<stdio.h>
int main(){
  int n, i;
  float soma=0.0;
  scanf("%d", &n);
  for(i=1; i<=n; i++){
    soma = soma + (float)1/i;
    printf("%f\n", soma);
  }
  printf("%f\n", soma);
  return 0;
}
