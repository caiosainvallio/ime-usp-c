#include<stdio.h>
int main(){
  char nome[20];
  double sal, vend, comis, total;
  scanf(" %[^\n]", nome);
  scanf("%lf %lf", &sal, &vend);
  comis = vend*0.15;
  total = comis + sal;
  printf("TOTAL = R$ %.2lf\n", total);


  return 0;
}
