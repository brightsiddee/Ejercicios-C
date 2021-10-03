#include <stdio.h>
int main(){
   float num; 
   int i=0, positivo=0, negativo=0, cero=0;
   
   while(i<10)
    {
        printf("Introduzca un Numero Entero: \n");
        scanf ("%f", num); 
        if (num>0)
        {
            positivo++;
        }
        if(num<0){
        
            negativo++;
        }
        else{
            cero++;
            }
         i++;
    }
    
    printf ("positivos: %d\n", positivo);
    printf ("negativos: %d\n", negativo);
    printf ("cero: %d", cero);
}
