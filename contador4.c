#include<stdio.h>
int main(){
  int par;
  int final;

  printf("Usuário, onde começa? ");
  scanf("%d", &par);

  if(par%2!=0) par++;

  printf("Usuário, até onde vai? ");
  scanf("%d", &final);

    while(par <= final){
      printf("%d ", par);
      par+=2;
    }
printf("\n");

return 0;
}
