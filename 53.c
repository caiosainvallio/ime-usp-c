#include<stdio.h>
int main(){
  int n, soma=0, i;

  scanf("%d", &n);

  for(i=0; i<n; i++){
    soma += 2 * i;
  }

  printf("%d\n", soma);
  return 0;
}
//ok
