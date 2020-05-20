#include<stdio.h>
int main(){
  int n, soma=0;
  scanf("%d", &n);
  while(n>=10){
    soma += n%10;
    n = n/10;
  }
  soma += n;
  printf("%d\n", soma);
  return 0;
}
//ok
