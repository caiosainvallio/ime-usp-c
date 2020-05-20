#include<stdio.h>
int main(){
  float num1, num2, result;
  char op;
  scanf("%f %f %c", &num1, &num2, &op);
  switch(op){
    case '+': result = num1 + num2;
              break;
    case '-': result = num1 - num2;
              break;
    case '*': result = num1 * num2;
              break;
    case '/': result = num1 / num2;
              break;
    default: printf("Oprecao invalida\n");
  }
  printf("%.2f\n", result);
return 0;
}
