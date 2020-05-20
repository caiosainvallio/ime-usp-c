#include<stdio.h>
int main(){
    int val1, val2, val3, hip;
    scanf("%d %d %d", &val1, &val2, &val3);
    val1 = val1*val1;
    val2 = val2*val2;
    val3 = val3*val3;

    if(val1 == val2 + val3) hip = 1;
    if(val2 == val1 + val3) hip = 2;
    if(val3 == val1 + val2) hip = 3;

    switch(hip){
      case 1:
        printf("1 %d\n", val1);
              break;
      case 2:
          printf("1 %d\n", val2);
                break;
      case 3:
          printf("1 %d\n", val3);
                break;
      default: printf("0\n");
    }

return 0;
}
