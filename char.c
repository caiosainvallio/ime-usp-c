#include<stdio.h>
int main(){
  int n, i;
  char car[100];
  scanf("%d", &n);
  for(i=1; i<=n; i++){
    scanf(" %c", &car[i]);
  }
  for(i=1; i<=n; i++){
  printf("%d\n", (int)car[i]);
  }
  return 0;
}
