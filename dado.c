#include<stdio.h>
int main(){
int i=0, d1=0, d2=0, d3=0, d4=0, d5=0, d6=0;
int face[1000];

for(i=0; face[i]!=0;i++){
  scanf("%d", &face[i]);
    (face[i]==1)? d1++ ;
    (face[i]==2)? d2++ ;
    (face[i]==3)? d3++ ;
    (face[i]==4)? d4++ ;
    (face[i]==5)? d5++ ;
    (face[i]==6)? d6++ ;
}
printf("Face 1 = %d", d1);
printf("Face 2 = %d", d2);
printf("Face 3 = %d", d3);
printf("Face 4 = %d", d4);
printf("Face 5 = %d", d5);
printf("Face 6 = %d", d6);

  return 0;
}
