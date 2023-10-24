/* Autor:  Astrit Lariza Garcia Castillo @Lary
 * Fecha:  24-10-2023
 * Correo: astritlariza2412@gmail.com
 *Impresion de la suma de 2 numeros a partir de la secuencia de uno * */


int main (){
int N, contador;
printf("Ingresa un numero");
scanf("%d",&N);
for(int i=0;i<=N;i++){
    contador+=i;
}
printf("%d",contador);
return 0;

} 
