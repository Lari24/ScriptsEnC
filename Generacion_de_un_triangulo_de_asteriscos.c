/* Autor:  Astrit Lariza Garcia Castillo @Lary
 * Fecha:  24-10-2023
 * Correo: astritlariza2412@gmail.com
 *Algoritmo que genera un triangulo de asteriscos a partir de un numero ingresado por el usuario
 * */


#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y,z;
  printf("Ingresa un numero = " );
  scanf("%d",&x);
  for(y=0;y<=x;y++){
    for(z=0;z<y;z++){
        printf("*");
    }
    printf("\n");
  }

  
}
