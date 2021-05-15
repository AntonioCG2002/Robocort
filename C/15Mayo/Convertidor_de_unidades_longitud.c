#include <stdio.h>

int main(){
float n1;
int o;

printf("Operación\n");
printf("1. METROS->CM   2. CM->METROS\n");
printf("3.  INCH->YD    4.  YD->INCH\n");
scanf("%i", &o);


    if(o==1){
      printf("METROS->CM\n");
      printf("Valor de metros\n");
      scanf("%f",&n1);
      printf("%f m -> %f cm", n1,(n1*100));
    }

    if(o==2){
      printf("CM->METROS\n");
      printf("Valor de cm\n");
      scanf("%f",&n1);
      printf("%f cm -> %f m", n1,(n1/100));
    }

    if(o==3){
      printf("INCH->YD\n");
      printf("Valor de inch\n");
      scanf("%f",&n1);
      printf("%f inch -> %f yd", n1,(n1/36));        
    }
    
    if(o==4){
      printf("YD->INCH\n");
      printf("Valor de yd\n");
      scanf("%f",&n1);
      printf("%f yd -> %f inch", n1,(n1*36));         
    }
    
    if(o>4)
        printf("ERROR");
        
    return 0;
}
