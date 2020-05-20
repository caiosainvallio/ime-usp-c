#include<stdio.h>
int main(){
  int valor, fatorial;
  scanf("%d", &valor);

  fatorial = 1;
  while(valor >= 1){
    fatorial = fatorial * valor;
    valor--;
  }
  printf("O fatorial é %d\n", fatorial);
  return 0;
}
