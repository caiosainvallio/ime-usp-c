#include <stdio.h>
int main (void) {
  int          // Criando 6 variaveis como (implicitamente) do tipo "int".
    val1 = 48, // Cada variavel recebera um valor inteiro que depois sera'
    val2 = 49, // interpretado como caractere.
    num1 = 97, //
    num2 = 98, //
    Num1 = 65, //
    Num2 = 66; //
  char            // Declarando variaveis tipo caractere
    charN1 = '0', // NOTE que para constantes do tipo
    charN2 = '1', // caractere, deve-se usar aspa simples
    Char1  = 'A', //
    Char2  = 'B', //
    char1  = 'a', //
    char2  = 'b'; //
  printf(" int | codigo\n"); // '\n' usado para forcar quebra de linha na impressao
  printf("  %d | %c\n", val1, val1);
  printf("  %d | %c\n", val2, val2);
  printf("  %d | %c\n", num1, num1);
  printf("  %d | %c\n", num2, num2);
  printf("  %d | %c\n", Num1, Num1);
  printf("  %d | %c\n", Num2, Num2);
  printf(" int | codigo\n");
  printf(" %c | %d\n", charN1, charN1);
  printf(" %c | %d\n", charN2, charN2);
  printf(" %c | %d\n", char1,  char1);
  printf(" %c | %d\n", char2,  char2);
  printf(" %c | %d\n", Char1,  Char1);
  printf(" %c | %d\n", Char2,  Char2);
  return 0;
  }
