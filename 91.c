#include<stdio.h>

int soma(int a, int b){
  return a+b;
}

float media(int a, int b){
  return (a+b)/2.0;
}

int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d ", soma(a,b));
  printf("%.1f", media(a,b));
return 0;
}
