#include <stdio.h>
#include <string.h>

int main() {

  int compteur = 5 ;
  if ( compteur > 10 ) break;

  // Boucle for
  for (int i = 0; i < compteur; ++i) {
    for (int j = 0; j <= i; ++j) {
      //printf("*");
      if (i >= 2 && i < (compteur-1) &&  j >= 1 && j < i) printf("#");
      else printf("*");
     }
    printf("\n");
  }

 
  
}
