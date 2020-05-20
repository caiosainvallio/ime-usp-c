#include<stdio.h>
#include<ctype.h>
int main(){
  char frase[2][50];
  int i, j=0;

  scanf("%[ˆ\n]", frase[0]);
  for(i=0; frase[0][i]!='\0'; i++){
    if(isalnum(frase[0][i])){
      j++;
      frase[1][j-1] = frase[0][i];
    }
  }
  for(i=0;frase[1][i]!='\0'; i++){
    printf("%c", frase[1][i]);
  }
  printf("\n");
  for(i=0;frase[1][i]!='\0'; i++){
    printf("%c :: %d\n", frase[1][i], frase[1][i]);
  }


  return 0;
}
