#include<stdio.h>
int main(){
  int i, soma=0, final;
  scanf("%d", &final);
  for(i=1; i<final; i++){
    soma = soma + i;
  }
  printf("%d\n", soma);
  return 0;
}
