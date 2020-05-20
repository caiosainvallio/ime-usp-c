#include<stdio.h>
int primo(int n){
  int i, d, cont=0;
    for(i=1; i<=n; i++){
      d = n%i;
      if(d==0)cont++;
    }
  if(cont==2){
    return 1;
  }
  else{
  return 0;
  }
}

int main(){
  int a;
  scanf("%d", &a);
  printf("%d\n", primo(a));
  return 0;
}
