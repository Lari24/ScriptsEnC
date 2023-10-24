/* Autor:  Astrit Lariza Garcia Castillo @Lary
 * Fecha:  24-10-2023
 * Correo: astritlariza2412@gmail.com
 *Algoritmo que calcula el salario de un trabajador a partir de las horas trabajadas
 * */



#include <stdio.h>
#include <stdlib.h>

int main(){
    int horas;
    int precioHora;
    int salario;

    printf("Ingresa las horas");
    scanf("%d",&horas);
    printf("Ingresa el precio del salario");
    scanf("%d",&precioHora);
    
        if(horas<=40){
            salario=(precioHora*horas);
    printf("Salario :%d",salario);

        }else{
        salario=(40*precioHora+(precioHora*1.5*(horas-40)));
    printf("Salario:%d",salario);
        }
        
    printf("Fin del programa");
    return 0;
}
