#include<stdio.h>
int main(){
  int i=1, a, b, n=1;
  scanf("%d", &a);
  scanf("%d", &b);

  while(b!=0){
    n++;
    if(b<a){
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
    printf("sim %d\n", n);
  }
  else{
    printf("nao %d\n", n);
  }
  return 0;
}





/*
int main(){
  int i, n=1, sim, nao=1, val[1000], cont=0;

  for(i=1; n!=0 ;i++){
    scanf("%d", &n);
    val[i-1] = n;
    cont++;
    if(val[i]<=val[i]){
      sim = 1;
    }

  }
  if(sim*nao == 1){
    printf("sim %d\n", cont-1);
  }
  else{
    printf("nao %d\n", cont-1);
  }


  return 0;
}
*/
