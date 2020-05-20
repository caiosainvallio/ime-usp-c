#include<stdio.h>
int main(){
  int nota100, nota50, nota20, nota10, nota5, nota2,
  moeda1, moeda50, moeda25, moeda10, moeda05, moeda01;
  int nota100sobra, nota50sobra, nota20sobra, nota10sobra, nota5sobra, nota2sobra,
  moeda1sobra, moeda50sobra, moeda25sobra, moeda10sobra, moeda05sobra;
  double valor, moedaVal;
  int notaVal;

  scanf("%lf", &valor);

  notaVal = (int) valor * 1;
  moedaVal = (int) ((valor - notaVal) * 100);

  printf("\nnotaVal %d\n", notaVal);
  printf("\nmoedaVal %lf\n", moedaVal);

  nota100 = notaVal / 100;
  nota100sobra = notaVal % 100;

  nota50 = nota100sobra / 50;
  nota50sobra = nota100sobra % 50;

  nota20 = nota50sobra / 20;
  nota20sobra = nota50sobra % 20;

  nota10 = nota20sobra / 10;
  nota10sobra = nota20sobra % 10;

  nota5 = nota10sobra / 5;
  nota5sobra = nota10sobra % 5;

  nota2 = nota5sobra / 2;
  nota2sobra = nota5sobra % 2;

  moeda1 = nota2sobra;

  moeda50 = (int) moedaVal / 50;
  moeda50sobra = (int) moeda50 % 50;

  moeda25 = (int) moeda50sobra / 25;
  moeda25sobra = (int) moeda50sobra % 25;

  moeda10 = (int) moeda25sobra / 10;
  moeda10sobra = (int) moeda25sobra % 10;

  moeda05 = (int) moeda10sobra / 5;
  moeda05sobra = (int) moeda10sobra % 5;

  moeda01 = moeda05sobra;

  printf("NOTAS:\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$2,00\n", nota100, nota50, nota20, nota10, nota5, nota2);
  printf("MOEDAS:\n%d moeda(s) de R$ 1,00\n%d moeda(s) de R$ 0,50\n%d moeda(s) de R$ 0,25\n%d moeda(s) de R$ 0,10\n%d moeda(s) de R$ 0,05\n%d moeda(s) de R$ 0,01\n", moeda1, moeda50, moeda25, moeda10, moeda05, moeda01);

return 0;
}
