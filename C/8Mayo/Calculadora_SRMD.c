#include <stdio.h>

int main(){
int n1,n2,o,s,r,m,d;

printf("Operación\n");
printf("1. Suma           2. Resta\n");
printf("3. Multiplicación 4. División\n");
scanf("%i", &o);
printf("Valor 1 y Valor 2\n");
scanf("%i %i",&n1, &n2);

    if(o==1){
        s = n1+n2; 
        printf("Suma:%i",s);
    }

    if(o==2){
        r=n1-n2;
        printf("Resta:%i",r);
    }

    if(o==3){
        m=n1*n2;
        printf("Multiplicación:%i",m);
    }
    
    if(o==4){
        d=n1/n2;
        printf("División:%i",d);
    }
    
    if(o>4)
        printf("ERROR");
        
    return 0;
}
