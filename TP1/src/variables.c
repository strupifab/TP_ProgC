#include <stdio.h>
#include <string.h>

int main() {

  char *charvar = "ma charvar";
  short *shortvar = "ma shortvar";
  inf intvar = 12
  signed int signedintvar = -80
  unsigned int unsignedintvar = 300

  signed long int signedlongintvar = -500000
  unsigned long int	unsignedlongintvar = 5055555

  signed long long int signedlonglongintvar = -50000000
  unsigned long long int unsignedlonglongintvar = 5055555666

  float floatvar = 3.55
  double doublevar = 6
  long double doubledoublevar = 6000

  printf("charvar = %s", charvar);
  printf("shortvar = %s", shortvar);
  printf("intvar = %i", intvar);
  printf("signedintvar = %i", signedintvar);
  printf("unsignedintvar = %i", unsignedintvar);
  printf("signedlongintvar = %i", signedlongintvar);
  printf("unsignedlongintvar = %i", unsignedlongintvar);
  printf("signedlonglongintvar = %i", signedlonglongintvar);
  printf("unsignedlonglongintvar = %i", unsignedlonglongintvar);

  printf("floatvar = %f",floatvar);
  printf("doublevar = %f",doublevar);
  printf("doubledoublevar = %f",doubledoublevar);

}
