#include<stdio.h>
#include<math.h>

float media(float vet[50]){
  int i;
  float ma = 0;
  for(i=0; vet[i]!='\0'; i++){
    ma += vet[i];
  }
  ma = ma/i;
  return ma;
}

float desvpad(float vet[50], float ma){
  int i;
  float dp = 0;
  for(i=0; vet[i]!='\0'; i++){
    dp += (vet[i] - ma)*(vet[i] - ma);
  }
  dp = dp/i;
  dp = sqrt(dp);
  return dp;
}

int main(){
 int n, i;
 float vet[50];
 float ma, dp;
 scanf("%d", &n);
 for(i=0; i<n; i++){
   scanf("%f", &vet[i]);
 }
 ma = media(vet);
 dp = desvpad(vet, ma);
 printf("%.1f\n%f\n", ma, dp);
  return 0;
}
