#include<stdio.h>
int main(){
  float notas[4], media=0;
  int i;
  for (i=0; i<4; i++){
    printf("Entre com a nota: ");
    scanf("%f", &notas[i]);
    media += notas[i];
  }
  media = media / 4;
  for(i=0; i<4; i++){
    printf("Nota %d = %.2f\n", i+1, notas[i]);
  }
  printf("Média = %.2f\n", media);
  return 0;
}
