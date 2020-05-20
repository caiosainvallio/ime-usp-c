#include<stdio.h>
int main(){

  int idade;
  float peso, altura, imc;

  printf("\nDigite sua idade\n");
  scanf("%d", &idade);

  printf("\nDigite seu peso em quilos (separando com ponto)\n");
  scanf("%f", &peso);

  printf("\nDigite sua altura em metros (separando com ponto)\n");
  scanf("%f", &altura);

  imc = peso/(altura*altura);

  printf("\nCom %d anos voce tem um IMC de %.2f!\n\n", idade, imc);

return 0;
}
