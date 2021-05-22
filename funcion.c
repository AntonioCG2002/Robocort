#include <stdio.h>
#include <math.h>
void areatriangulo(){
   printf("Area triangulo\n");
   float area, base, altura;
   printf("Escribe la base\n");
   scanf("%f",&base);
   printf("Escribe la altura\n");
   scanf("%f",&altura);
   area=(base*altura/2);
   printf("El area es:");
   printf("%f \n",area);
}

void areacuadrado(){
   printf("Area Cuadardo\n");
   float area, base;
   printf("Escribe la base\n");
   scanf("%f",&base);
   area=base*base;
   printf("El area es:");
   printf("%f \n",area);
}

void rectangulo(){
      printf("Area Rectangulo\n");
   float area, base, altura;
   printf("Escribe la base\n");
   scanf("%f",&base);
   printf("Escribe la altura\n");
   scanf("%f",&altura);
   area=(base*altura);
   printf("El area es:");
   printf("%f \n",area);
}