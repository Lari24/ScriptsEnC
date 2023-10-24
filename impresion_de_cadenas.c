/* Autor:  Astrit Lariza Garcia Castillo @Lary
 * Fecha:  24-10-2023
 * Correo: astritlariza2412@gmail.com
 *Algoritmo imprime 2 cadenas (la segunda cadena se repite dependiendo la cantidad de letras que tenga la primera) * */

#include <stdio.h>

int main(){
char p1[100];
char p2[100];
int len;

printf("Ingresa una palabra: ");
scanf("%s",&p1);
printf("Ingresa otra palabra: ");
scanf("%s",&p2);
len=strlen(p1);


for(int i=1; i<=len; i++){
   strcat(p1,p2);
}
printf("Final: %s", p1);

}
