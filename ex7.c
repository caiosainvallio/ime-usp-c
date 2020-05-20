#include<stdio.h>
int main() {
  int valor, resultado;
  scanf("%d", &valor);
  if((valor % 2)==0){
    resultado = 1;
  }
  else{
    resultado = 0;
  }
  printf("%d", resultado);
return 0;
}
