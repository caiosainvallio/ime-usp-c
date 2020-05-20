#define TAM 1000
#include<stdio.h>
int main(){
  int n, i, lancamento[TAM], faces[6]={0,0,0,0,0,0};
  printf("Qantas vezes você irá jogar o dado? ");
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &lancamento[i]);
    faces[lancamento[i]-1]++;
  }
  for(i=0; i<6; i++){
    printf("Face %d apareceu %d vezes\n", i+1, faces[i]);
  }
  return 0;
}
