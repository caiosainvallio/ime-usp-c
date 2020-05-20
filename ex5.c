#include<stdio.h>
int main() {
  int valor1, valor2, resultado;
  scanf("%d%d", &valor1, &valor2);
  if(valor1 < valor2) {
    resultado = 1;
  }
  else {
    resultado = 0;
  }
  printf("%d", resultado);
return 0;
}
