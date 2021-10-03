#include <stdio.h> 
int main(){ 
   float num, max=0; 
   int total=0; 
   printf ("Nota: El programa finalizara al ingresar el valor 0.\n");
   

   
   
   do{
      printf ("Ingresa un n%cmero: \n", 163); 
      scanf ("%f", &num); 
      
      if (num>=max) 
         { 
            max = num;
            } 
      if (num == max)
      {
       total++;
       }
     } while(num!=0); 
   
  
   printf ("El maximo es: %f", max); 
   printf ("\nSe repitio %d veces", total); 

}
