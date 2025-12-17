#include <stdio.h>
#include <string.h>
/*
Écrivez un programme nommé calculs.c dans la fonction main() qui utilise trois variables :

num1 (entier)
num2 (entier)
op (un caractère)
La variable op contient l'un des différents opérateurs mathématiques ou de bits suivants : '+', '-', '*', '/', '%', '&', '|', '~'.

Utilisez une structure switch pour déterminer l'opération à effectuer en fonction de la valeur de op. Par exemple, si op est égal à '+', le programme doit effectuer l'addition des deux variables num1 et num2. 
Si op est égal à '&', le programme doit effectuer une opération ET, et ainsi de suite.

Testez votre programme avec différentes valeurs de num1, num2, et op pour vous assurer que les opérations sont correctement effectuées en fonction de la valeur de op.
*/
int main() {

  int num1;
  int num2;
  int retour;
  char op = '+';    //'+', '-', '*', '/', '%', '&', '|', '~'.

  switch ( op ) {
    case '+':
        retour = num1 + num2;
        break;
    case '-':
        retour = num1 - num2;
        break;
    default:
        retour = num1 + num2;
  }

  printf( "%d %d %d = %d\n", num1, op, num2, retour);
  printf("\n");

}
