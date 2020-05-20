#include<stdio.h>
int main(){
  int i;
  int precos[10];
  printf("Entre com os 10 valores: ");
  for(i=9; 1>=0; i--){
    scanf("%d", &precos[i]);
  }
  printf("Os valores na orden inversa são:\n");
  for(i=0; i<10; i++){
    printf("%df", precos[i]);
  }
  return 0;
}
