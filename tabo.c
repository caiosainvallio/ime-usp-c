#include<stdio.h>
int main(){
  int valor, cont = 1;
  scanf("%d", &valor);

  while(cont <= 10){
    printf("%d x %d = %d\n", cont, valor, cont * valor);
    cont++;
  }
return 0;
}
