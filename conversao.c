#include<stdio.h>
int main(){
  int op;
  float valor1, valor2;
  printf("\n\nPROGRAMA PARA CONVERSÃO\n\n");
  printf("1 - Polegadas (Pol) para Centímetros (Cm)\n");
  printf("2 - Centímetros (Cm) para Polegadas (Pol)\n");
  printf("3 - Metros (m) para Quilometros (Km)\n");
  printf("4 - Quilometros (Km) para Metros (m)\n");
  printf("\nEscolha sua opção: ");
  scanf("%d", &op);
  switch (op) {
    case 1:
      printf("\nEntre com o valor em Polegadas (Pol): ");
      scanf("%f", &valor1);
      printf("\n%.2fPol em centímetros são %.2fCm\n", valor1, valor1*2.54);
      break;
    case 2:
      printf("\nEntre com o valor em Centímetros (Cm): ");
      scanf("%f", &valor1);
      printf("\n%.2fCm em Polegadas são %.2fPol\n", valor1, valor1/2.54);
      break;
    case 3:
      printf("\nEntre com o valor em Metros (m): ");
      scanf("%f", &valor1);
      printf("\n%.2fm em Quilometros são %.2fKm\n", valor1, valor1/100);
      break;
    case 4:
      printf("\nEntre com o valor em Quilometros (Km): ");
      scanf("%f", &valor1);
      printf("\n%.2fKm em Metros são %.2fm\n", valor1, valor1*100);
  }
  return 0;
}
