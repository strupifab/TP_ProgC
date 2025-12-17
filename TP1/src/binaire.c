#include <stdio.h>
#include <string.h>
/*
Affichage d'un nombre en format binaire

Écrivez un programme nommé binaire.c dans la fonction main() qui utilise une boucle for pour afficher une variable de type int en format binaire. 
Il est important de noter que la fonction printf en C n'a pas de code de conversion dédié pour afficher un nombre en notation binaire, contrairement à 'x' pour l'hexadécimal ou 'o' pour l'octal.

Pour résoudre ce problème, vous devrez développer votre propre code pour convertir un nombre entier en sa représentation binaire.
Utilisez la division par 2 et le reste de la division (%) pour obtenir chaque chiffre binaire. Affichez ensuite ces chiffres de manière appropriée pour obtenir la représentation binaire complète du nombre.

Testez votre code en utilisant les cinq nombres suivants : 0, 4096, 65536, 65535, 1024, et affichez leur représentation binaire correspondante.

Suggestions pour le programme :

Pensez à utiliser les opérateurs pour la manipulation de bits (&, | ou ~)
*/

int main() {
  int numdecimalTab[] = {0,4096,65536,65535,1024};

  for (int num=0;num<5;num++) {

      int numdecimal = numdecimalTab[num];
      unsigned int numbinaire[20];
      int reste = numdecimal % 2;
      int resultat = numdecimal / 2;
      int cpt = 0;
    
      for (int i=0;i<=sizeof numbinaire / sizeof *numbinaire;i++) {
        numbinaire[i] = -1;
      }
    
      numbinaire[cpt] = reste;
    
      while (resultat != 0){
    
         int numdecimaltmp = resultat;
         reste = numdecimaltmp % 2;
         resultat = numdecimaltmp / 2;
    
         //printf( "%d / %d = %d\n", numdecimaltmp, 2, resultat);
         //printf( "%d modulo %d = %d\n", numdecimaltmp, 2, reste);
    
         cpt ++;
         numbinaire[cpt] = reste;
      }
    
      printf("\nConversion de %d en binaire = ", numdecimal);
      for (int i=20;i>=0;i--) {
        if ( numbinaire[i] != -1) printf("%d", numbinaire[i]);
      }

  }

  printf( "\n");
}
