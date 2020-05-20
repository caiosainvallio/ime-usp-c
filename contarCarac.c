#include<stdio.h>
#include<string.h>
int main(){
  char frase[100];
  int i;
  printf("Entre com a frase:\n");
  scanf("%[^\n]", frase);
  i = strlen(frase);
  printf("Esta frase tem %d caracteres.\n", i);
  return 0;
}
