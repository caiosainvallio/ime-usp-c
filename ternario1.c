#include<stdio.h>
int main(){
  //printf("Escreve dois numeros e imprima o maior");

  int n1, n2, maior;
  scanf("%d %d", &n1, &n2);

  //forma 1
  /*
  maior = (n1 > n2) ? n1 : n2;
  printf("%d\n", maior);
  */

  //forma 2
  /*
  (n1 > n2) ? printf("%d\n", n1) : printf("%d\n", n2);
  */

  //forma 3
  printf("%d\n", (n1 > n2)? n1 : n2);

Return 0;
}
