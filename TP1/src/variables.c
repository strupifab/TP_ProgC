#include <stdio.h>
#include <string.h>

int main() {

  char *charvar = "ma charvar";
  short shortvar = 10;
  inf intvar = 12;
  signed int signedintvar = -80;
  unsigned int unsignedintvar = 300;
  signed long int signedlongintvar = -500000;
  unsigned long int	unsignedlongintvar = 5055555;
  signed long long int signedlonglongintvar = -50000000;
  unsigned long long int unsignedlonglongintvar = 5055555666;
  float floatvar = 3.55;
  double doublevar = 6;
  long double doubledoublevar = 6000;

  printf("charvar = %s", charvar);
  printf("\nshortvar = %i", shortvar);
  printf("\nintvar = %i", intvar);
  printf("\nsignedintvar = %i", signedintvar);
  printf("\nunsignedintvar = %i", unsignedintvar);
  printf("\nsignedlongintvar = %li", signedlongintvar);
  printf("\nunsignedlongintvar = %li", unsignedlongintvar);
  printf("\nsignedlonglongintvar = %lli", signedlonglongintvar);
  printf("\nunsignedlonglongintvar = %lli", unsignedlonglongintvar);
  printf("\nfloatvar = %f",floatvar);
  printf("\ndoublevar = %f",doublevar);
  printf("\ndoubledoublevar = %Lf",doubledoublevar);

}


