#include<stdio.h>
int main(){
  int valor, cont = 1, pares = 0;

  while(cont <= 5){
    scanf("%d", &valor);
    if(valor%2==0) pares++;
    cont++;
  }
  printf("%d valores pares\n", pares);
return 0;
}
