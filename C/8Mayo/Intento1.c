#include <stdio.h>

int main(){
  int n1,n2;
  int o,resultado;
  printf("Tipo de Operacion");
  scanf("%d",&o);
  printf("Valor de Variables");
  scanf("%d %d", &n1,&n2);
  if(o==1){
    resultado=n1+n2;
    printf("Resultado: %d",resultado);
  }
    return 0;
}
