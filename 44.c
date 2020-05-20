#include<stdio.h>
int main(){
  char c = 'a';
  while(c != '0'){
    scanf(" %c", &c);
    if(c>= 'a' && c<='z'){
      printf("1\n");
    }
    else{
      if(c>= 'A' && c<='Z'){
        printf("2\n");
      }
      else{
        printf("-1\n");
      }
    }
  }

  return 0;
}
