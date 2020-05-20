#include<stdio.h>
#include<string.h>

int main(){
char entrada[100];
char digitos[100];
int j=0, i;

scanf("%[ˆ\n]", entrada);

for(i=0 ; i<=strlen(entrada); i++){
  if((int)entrada[i]>= 48 && (int)entrada[i]<=57){
    digitos[j] = entrada[i];
    j++;
  }
}
for(i=0; i<=strlen(digitos); i++){
  printf("%c", digitos[i]);
}

return 0;
}
