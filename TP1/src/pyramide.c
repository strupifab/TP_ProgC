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
  printf("\nDébut de la génération de la pyramide de taille %d \n", n);
  printf( "\n");   
  for (int i=1;i<=n;i++) {

      //printf("Num ligne = %d\n",i);
      //int numcomposant = i + (i-1);
      for (int j=i;j<n;j++) { 
          printf(" ");
      }

      for (int l=1;l<i;l++) printf("%d",l);
      for (int l=i;l>=1;l--) printf("%d",l);

      //printf("%d (numcomposant %d) ",i,numcomposant);

   printf( "\n");   
  }
  printf("\nFin de génération de la pyramide !");
    
}
