#include<stdio.h>
int main(){
  int senha;
  printf("Digite sua senha: ");
  scanf("%d", &senha);
  while(senha != 2002){
    printf("Senha invalida\n\n");
    printf("Digite sua senha novamente: \n\n");
    scanf("%d", &senha);
  }
  printf("Acesso permintido\n\n");
  return 0;
}
