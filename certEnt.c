#include<stdio.h>
int main(){
  int entrada;

  printf("Entre com o valor: ");
  scanf("%d", &entrada);

  while(entrada < 0 || entrada > 100){
    printf("Opa, tu é besta? Digite entre 0 e 100, amigo: ");
    scanf("%d", &entrada);
  }

  printf("Valeu!\n");

  return 0;
}
