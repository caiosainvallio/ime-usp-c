#include<stdio.h>
int main(){
  int n, soma=1, i;

  scanf("%d", &n);

  for(i=0; i<=n; i++){
    soma +=  * i;
  }

  printf("%d\n", soma);
  return 0;
}
