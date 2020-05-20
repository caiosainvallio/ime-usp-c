#include<stdio.h>
#define MAXL 5
#define MAXC 5
int main (){
  char nomes[MAXL][50];
  float medias[MAXL][MAXC];
  int i, j;

  printf("Bem vindo ao programa de médias!\n");

  printf("Entre com os dados: ");
  for(i=0; i<MAXL; i++){
    scanf(" %[^\n]", nomes[i]);
    for(j=0; j<4; j++){
      scanf("%f", &medias[i][j]);
    }
    medias[i];
  }

  print("NOME\t\t");
  for(i=0; i<MAXL; i++){
    printif("%.1ft\n", medias[i]);
  }



  return 0;
}
