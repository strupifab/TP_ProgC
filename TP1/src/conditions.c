#include <stdio.h>
#include <string.h>
/*
Écrivez un programme en C nommé conditions.c qui effectue les tâches suivantes :

Utilisez une boucle for pour parcourir les nombres de 1 à 1000.

Pour chaque nombre, vérifiez les conditions suivantes :

Si le nombre est divisible par 5 ou par 7, ajoutez-le à une variable somme.
Si le nombre est divisible par 11, ne l'ajoutez pas à somme et passez directement au nombre suivant (utilisez continue).
Si la somme dépasse 5000 à tout moment, arrêtez immédiatement la boucle (utilisez break).

Affichez la somme finale après avoir terminé la boucle ou après avoir interrompu le calcul si la somme a dépassé 5000.
*/
int main() {

  int somme = 0;  
  int compteur = 1000;
    
  for (int i = 1; i <= compteur; ++i) {
    // Si nombre divisible par 5 ou 7 
    if ( (i % 5 == 0) || ( i % 7 == 0) ) somme += i;
    if (i % 11 == 0 ) continue;
    if ( somme > 5000 ) break;
    printf("\n Compteur = %i", i);
  }
  printf("\n----------------------");
  printf("\nSomme = %i", somme);
  printf("\n");

}



