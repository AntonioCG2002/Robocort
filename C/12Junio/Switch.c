#include <stdio.h>
int main(){
   int dia;
   printf("Ingresar numero de dia");
   scanf("%d",&dia);
   switch(dia){
      case 1 :
      printf("Lunes");
      break;
      case 2 :
      printf("Martes");
      break;
      case 3 :
      printf("Miercoles");
      break;
      case 4 :
      printf("Jueves");
      break;
      case 5 :
      printf("Viernes");
      break;
      default :
      printf("Dia no Existe");
      break;
   }
    return 0;
}
//SOLO DE LUNES A VIERNES
