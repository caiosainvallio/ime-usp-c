#include<stdio.h>
int main(){
float renda;
float imposto;
scanf("%f", &renda);
if(renda <= 2000.00){
  printf("isento");
  }
  else{

    if((renda >= 2000.01) && (renda <= 3000.00)){
      imposto = (renda - 2000.0) * 0.08;
      printf("R$ %.2f\n", imposto);
      }

    else{

      if((renda >= 3000.01) && (renda <= 4500.00)){
        imposto = (renda - 3000.0) * 0.18 + 80;
        printf("R$ %.2f\n", imposto);
        }

        else{
            if(renda > 4500.00){
            imposto = (renda - 4500.0) * 0.28 + 80 + 270;
            printf("R$ %.2f\n", imposto);
            }
         }
      }
  }

return 0;
}
