#include<stdio.h>
int main(){
  int n, i;
  float x, total=1;
  scanf("%d %f", &n, &x);
  for(i=1; i<=n; i++){
    total = total * x;
  }
  printf("%f\n", total);
  return 0;
}
