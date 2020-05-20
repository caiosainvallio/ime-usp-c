#include<stdio.h>
int main(){

  int naturais, final;

  printf("Usuário, onde começa? ");
  scanf("%d", &naturais);

  printf("Usuário, até onde vai? ");
  scanf("%d", &final);

  while(naturais <= final){
    printf("%d ", naturais);
    naturais++;
  }

  printf("\n");

  return 0;
}
