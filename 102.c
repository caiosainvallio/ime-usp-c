#include<stdio.h>

float func_media (float vet[100], int n){
  int i=0;
  float soma;
  for(i=0;i<=n;i++){
    soma += vet[i];
  }
  return soma/n;
}

int main(){
  int m, n, i, j, lin;
  float mat[100][100];

  scanf("%d %d", &m, &n);
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
        scanf("%f", &mat[i][j]);
      }
    }

  scanf("%d", &lin);
  printf("%.1f\n", func_media(mat[lin], n));
  return 0;
}
