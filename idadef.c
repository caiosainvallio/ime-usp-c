#include<stdio.h>
int main(){

int n, idade, i, cri = 0, ado = 0, jov = 0, adu = 0, ido = 0;

printf("Entre com o numero de pessoas: ");
scanf("%d", &n);

for(i=1;i<=n;i++){
  printf("Entre com a idade: ");
  scanf("%d", &idade);
  switch(idade){
    case 0 ... 10:
      cri++;
      break;
    case 11 ... 17:
      ado++;
      break;
    case 18 ... 30:
      jov++;
      break;
    case 31 ... 65:
      adu++;
      break;
    default:
      ido++;
  }
}
printf("O numero de criancas é %d\n", cri);
printf("O numero de adolecentes é %d\n", ado);
printf("O numero de jovens é %d\n", jov);
printf("O numero de dultos é %d\n", adu);
printf("O numero de idosos é %d\n", ido);

return 0;
}
