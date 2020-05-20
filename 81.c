#include<stdio.h>

int determineSeOrdenado(int n, int vet);

int main(){
  int n, i, tf;
  int vet[50];
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &vet[i]);
  }
  tf = determineSeOrdenado(n, &vet);
  printf("%d", tf);
  return 0;
}

int determineSeOrdenado(int n, int vet){
  int i, ii = -999, tf = 0;
  int vet[50];
  for(i=0; i<n; i++){
    if(vet[i]>=ii){
      ii = vet[i];
      tf = 1;
    }
  }
  return(tf);
}
