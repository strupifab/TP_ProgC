#include <stdio.h>
#include <string.h>
/*
Génération d'une pyramide de nombres
Objectif : Écrivez un programme nommé pyramide.c pour générer et afficher une pyramide de nombres en utilisant des boucles imbriquées. Ce motif utilise des nombres dans un motif spécifique.
Exemple pour n = 5
    1     (1) 1 (e=4)
   121    (3) 2 (e=3)
  12321   (5) 3 (e=2)
 1234321  (7) 4 (e=1)
123454321 (9) 5 (e=0)

*/

int main() {

  int n = 5;
  
  for (int i=1;i<=n;i++) {

      printf("Num ligne = %d\n",i);
      int numcomposant = i + (i-1);
      for (int j=i;j<n;j++) { 
          printf(" ");
      }
      for (int k=0;k<numcomposant;k++) {
         printf("n");
       }

      //printf("%d (numcomposant %d) ",i,numcomposant);

   printf( "\n");   
  }


    /*
      for (int i=0;i<=sizeof numbinaire / sizeof *numbinaire;i++) {
        numbinaire[i] = -1;
      }
 */
  
  //printf("\nConversion de %d en binaire = ", numdecimal);
  
}
