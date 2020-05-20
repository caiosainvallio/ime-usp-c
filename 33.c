#include<stdio.h>
int main(){
  int i=1, soma=0, total;
  scanf("%d", &total);
  while(soma+i<=total){
      soma +=i;
      i++;
  }
  printf("%d\n", soma);
  return 0;
}
