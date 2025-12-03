#include <stdio.h>
#include <string.h>

int main() {

  int compteur = 5 ;
  if ( compteur <= 10 ) {

    // Boucle for
    // **************************
    for (int i = 0; i < compteur; ++i) {
      for (int j = 0; j <= i; ++j) {
        if (i >= 2 && i < (compteur-1) &&  j >= 1 && j < i) printf("#");
        else printf("*");
       }
      printf("\n");
    }

     printf("\n --------------------------- \n");

    // Boucle while
    // **************************
    int i = 0 ;
    while (i < compteur ){
       int j = 0;
       while (j <= i ){
         if (i >= 2 && i < (compteur-1) &&  j >= 1 && j < i) printf("#");
         else printf("*");
         j++;
       }
       printf("\n");
       i++;
    }
 
    else
    printf("Erreur : compteur > 10");

  
}



