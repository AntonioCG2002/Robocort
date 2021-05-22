#include "funcion.h"

int main(){
   int menu=0;
   
   while(menu==0){
      int salir;
      printf("Menu\n");
      printf("Area Triangulo 1\n");
      printf("Area Cuadrado 2\n");
      printf("Salir 3\n");
      scanf("%i",&salir);
      if(salir==1)
      areatriangulo();
      if(salir==2)
      areacuadrado();
      if(salir==3)
      menu++;
   }
   
   return 0;
}
