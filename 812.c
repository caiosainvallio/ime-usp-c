#include<stdio.h>

int determineSeOrdenado(int vet[50]){
  int i, ii = -99, tf = 1;
  for(i=0; vet[i]!='\0'; i++){
    if(vet[i]<ii){
      tf = 0;
    }
    ii = vet[i];
  }
  return tf;
}

int main(){
  int n, i, ii = -99;
  int vet[50];
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &vet[i]);
  }
    printf("%d\n", determineSeOrdenado(vet));
  return 0;
}
