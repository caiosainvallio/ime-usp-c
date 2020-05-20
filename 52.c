#include<stdio.h>
int main(){
  int i=1, a, b, n=1, r;
  scanf("%d", &a);
  scanf("%d", &b);
  r=b-a;
  while(b!=0){
    n++;
    if(r!=b-a){
      i=0;
      a=b;
      scanf("%d", &b);
    }
    else{
      a=b;
      scanf("%d", &b);
    }
  }

  if(i==1){
    printf("sim %d\n", r);
  }
  else{
    printf("nao %d\n", n);
  }
  return 0;
}
