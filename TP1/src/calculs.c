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

  int num1 = 10;
  int num2 = 5;
  int retour;
  char op = '*';    //'+', '-', '*', '/', '%', '&', '|', '~'

  switch ( op ) {
    case '+':
        retour = num1 + num2;
        printf( "%d + %d = %d\n", num1, num2, retour);
        break;
    case '-':
        retour = num1 - num2;
        printf( "%d - %d = %d\n", num1, num2, retour);
        break;
    case '*':
        retour = num1 * num2;
        printf( "%d * %d = %d\n", num1, num2, retour);
        break;
    case '/':
        retour = num1 / num2;
        printf( "%d / %d = %d\n", num1, num2, retour);
        break;
    case '%':
        retour = num1 % num2;
        printf( "%d % %d = %d\n", num1, num2, retour);
        break;
    case '&':
        retour = num1 & num2;
        printf( "%d & %d = %d\n", num1, num2, retour);
        break;
    case '|':
        retour = num1 | num2;
        printf( "%d | %d = %d\n", num1, num2, retour);
        break;
    case '~':
        printf( "~%d = %d\n", num1, ~num1);
        printf( "~%d = %d\n", num2, ~num2);
        break;
  }

  printf("\n");

}






