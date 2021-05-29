#include <stdio.h>

int main(){
int n1,n2,o,s,r,m,d,h,u;

printf("Edad\n");
printf("1. Calculador de edad           2. Nacimiento\n");
scanf("%i", &o);
printf("Ya cumpliste años este año(3. Si 4. No)\n");
scanf(" %i",&n1);

    if(o==1){
       if(n1==3){
        printf("Año en que naciste:\n");
        scanf("%i",&n2);
        s=2021-n2;
        printf("Tu edad es:%i ",s);
        }
       if(n1==4){
        printf("Año en que naciste:\n");
        scanf("%i",&n2);
        s=2021-n2;
        s--;
        printf("Tu edad es:%i ",s);
        }
   }

    
     if(o==2){
       if(n1==3){
        printf("¿Cúantos años tienes?:\n");
        scanf("%i",&u);
        h=2020-u;
        printf("Naciste el:%i",h);
        }
       if(n1==4){
        printf("¿Cúantos años tienes?:\n");
        scanf("%i",&m);
        d=2021-m;
        d--;
        printf("Naciste el:%i ",d);        
        }
        
    if(o>4)
        printf("ERROR");
        
    return 0;
}
}
