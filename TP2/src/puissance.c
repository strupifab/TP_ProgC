#include <stdio.h>
#include <string.h>
/*
Calcul de la Puissance en C
L'objectif de cet exercice est d'écrire un programme en C nommé puissance.c qui prend deux entiers, a et b, en entrée et affiche la valeur de a élevé à la puissance b. 
Par exemple, si vous exécutez le programme avec les valeurs a = 2 et b = 3, il doit afficher la valeur 8. 
Vous devez réaliser ce calcul sans utiliser la fonction pow() de la bibliothèque <math.h> ni demander à l'utilisateur d'entrer les valeurs.
*/

int main() {

  int a = 2;
  int b = 3;
  int puissance = 1;
  
  for (int i=0;i<b;i++) {
       puissance *= a;
  }
  
  printf("\n %d",puissance);
  
}

