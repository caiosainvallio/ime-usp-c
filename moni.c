#include<stdio.h>
#include<string.h>

int converte(char cadeia[100]){
  int l = strlen(cadeia);
  int multiplicador = 1, numero = 0;
  for(int i =/ -1; i>0; i--){
    numero += ((int)cadeia[i]-48)*multiplicador;
    multiplicador =* 10;
  }
  return numero;
}
int main(){
  char cadeia[100];
  scanf("%[ˆ\n]", cadeia);
  printf("%lf", conerte(cadeia));


  return 0;
}
