#include <stdio.h>
#include <string.h>

int main() {

  int a = 16;
  int b = 3;
  printf( "%d + %d == %d\n", a, b, a+b );
  printf( "%d - %d == %d\n", b, a, b-a );
  printf( "%d * %d == %d\n", a, b, a*b );
  printf( "%d / %d == %d\n", a, b, a/b );
  printf( "%d module %d == %d\n", a, b, a%b );
  printf( "%d == %d == %d\n", a, b, (a==b) );
  printf( "%d > %d == %d\n", a, b, (a>b) );
 
}




