/* Autor:  Astrit Lariza Garcia Castillo @Lary
 * Fecha:  24-10-2023
 * Correo: astritlariza2412@gmail.com
 *Algoritmo que genera un cuadrado de asteriscos a partir de la cantidad le letras de una cadena
 * */

#include <stdio.h>
#include <stdlib.h>

int main(){
    char cad[]="Hola";
    int len,i,j;
    len=strlen(cad);
    printf("Cuadrado de asteriscos de %d\n",len);

    for(i=0; i<len; i++){
        for(j=0; j<len; j++){
        printf("*");
    }
    printf("\n");
      }
 
   
}
