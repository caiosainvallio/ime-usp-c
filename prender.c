#include<stdio.h>
int main(){
  int op;

  scanf("%d", &op);

  while(op != 0){
    scanf("%d", &op);
    printf("Valor digitado: %d\n", op);
  }
  printf("Tchau\n");
}
