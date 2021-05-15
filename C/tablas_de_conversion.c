#include <stdio.h>
int main (){
  float  cm,m;
  char o;
  scanf("%s",&o);
  if(o=='c'){
    printf("CONVERTIDOR DE CM A M\n");
    for(cm=0; cm <=100; cm=cm+20)
    printf("%3.0f cm \t %0.2f m\n",cm, (cm/100));
}
  if(o=='m'){
    printf("CONVERTIDOR DE M A CM\n");
    for(m=0; m <=10; m=m+2)
    printf("%3.0f m \t %4.0f cm\n",m ,m*100);
}
}
