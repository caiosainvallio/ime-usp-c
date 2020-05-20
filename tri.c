#include<stdio.h>

 int main(){
     int val1, val2, val3, soma;
     scanf("%d %d %d", &val1, &val2, &val3);
     soma = val1 + val2 + val3;
     switch(soma){
         case 180:
             printf("Sim %d %d %d", val1, val2, val3);
                 break;
         default: printf("NAO %d\n", soma);
     }

 return 0;
 }





/*
int main(){
    int val1, val2, val3, soma;
    scanf("%d %d %d", &val1, &val2, &val3);
    if(val1 + val2 + val3 == 180){
        printf("Sim\n");
    }
    else{
        soma = val1 + val2 + val3;
        printf("NAO %d\n", soma);
    }
return 0;
}
*/
