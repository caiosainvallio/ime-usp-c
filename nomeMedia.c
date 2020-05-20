#include<stdio.h>
#define MAX 5
int main(){
  char nomes[MAX][100];
  float medias[MAX][5];
  int i, j;

  for(i = 0; i < MAX; i++){
    medias[i][4] = 0;
  }

  for(i = 0; i < MAX; i++){
    printf("Entre com o nome do %do. aluno: ", i+1);
    scanf(" %[^\n]", nomes[i]);
    printf("Agora entre com as notas: ");
    for(j = 0; j < MAX-1; j++){
      scanf("%f", &medias[i][j]);
      medias[i][4] += medias[i][j];
    }
    medias[i][4] /= 4;
  }

  printf("NOME \t\t N1\t N2\t N3\t N4\t FINAL\n");

  for(i = 0; i < MAX; i++){
    printf("%s\t\t", nomes[i]);
    for(j = 0; j < MAX; j++){
      printf("%.1f\t", medias[i][j]);
    }
    printf("\n");
  }

  return 0;
}
