#include<stdio.h>
int main(){
  int n, imp=0;

  do{
    scanf("%d", &n);
    if(n%2!=0)imp = imp + n;
    }while(n!=0);

  printf("%d\n", imp);
  return 0;
}
