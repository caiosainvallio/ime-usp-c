#include<stdio.h>
int main(){
  int n=1, pos=0, neg=0;
  while(n != 0){
    scanf("%d", &n);
      if(n<0){
      neg = neg - n;
      }
      else{
      pos = pos + n;
      }
    }
  printf("%d -%d\n", pos, neg);
}
