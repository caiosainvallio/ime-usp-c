#include<stdio.h>

int main(){
  int idade, maisvelho;

  maisvelho = -1; idade = 0;

  //printf("Entre com a idade ou -1 para sair");
  while (idade > -1) {
    scanf("%d",&idade);
    if (idade > maisvelho) maisvelho = idade;
  }
    printf("%d", maisvelho);
    return 0;
}
