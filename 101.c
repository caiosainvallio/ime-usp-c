#include<stdio.h>
int main(){
  int m, n, i, j;
  float vet[100][100];
  float somaL = 0;
  scanf("%d %d", &m, &n);
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
        scanf("%f", &vet[i][j]);
      }
    }
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
        printf("%5.1f", vet[i][j]);
        somaL += vet[i][j];
      }
      printf(" = %5.1f", somaL);
      printf("\n");
      somaL = 0;
    }
  return 0;
}
