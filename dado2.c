#define TAM 1000
#include<stdio.h>
int main(){
  int i, lancamento[TAM], faces[6]={0,0,0,0,0,0};

  for(i=0; i<TAM; i++){
    scanf("%d", &lancamento[i]);
    if(lancamento[i]==0) break;
    else faces[lancamento[i]-1]++;
  }
  for(i=0; i<6; i++){
    printf("Face %d apareceu %d vezes\n", i+1, faces[i]);
  }
  return 0;
}
