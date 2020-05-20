#include<stdio.h>
int fat(int a){
  int i, fat=1;
  if(a<0){
    return -1;
  }
  else{
    if(a==0){
      return 1;
    }
    else{
      for(i=1; i<=a; i++){
        fat *= i;
      }
      return fat;
    }
  }
}

int main(){
  int a;
  scanf("%d", &a);
  printf("%d\n", fat(a));
  return 0;
}
