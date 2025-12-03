#include <stdio.h>
#include <string.h>

int main() {

  int compteur = 5 ;
  for (int i = 0; i < compteur; ++i) {
    for (int j = i; j <= i; ++j) {
      printf("*");
    }
    printf("\n");
  }

}



