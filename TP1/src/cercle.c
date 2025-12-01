#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
double rayon = 5.0;
double aire = M_PI * rayon * rayon;
double perimetre = 2 * M_PI * rayon;

   printf("Rayon : %.2f ", rayon);	  
   printf("L'air du cercle = %.2f ", aire);
   printf("Le périmètre du cercle  = %.2f ", perimetre);
   return 0;
}

