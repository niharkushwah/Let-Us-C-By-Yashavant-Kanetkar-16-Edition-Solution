#include<stdio.h>

int main()
{
  int A01,A02,A11,A12,A21,A22,A31,A32,A41,A42,A51,A52,A61,A62,A71,A72,A81,A82;

  A01=1189;
  A02=841;
  printf("\nA0 : %dmm x %dmm",A01,A02);

  A11=841;
  A12=A01/2;
  printf("\nA1 : %dmm x %dmm",A11,A12);

  A21=A12;
  A22=A11/2;
  printf("\nA2 : %dmm x %dmm",A21,A22);

  A31=A22;
  A32=A21/2;
  printf("\nA3 : %dmm x %dmm",A31,A32);

  A41=A32;
  A42=A31/2;
  printf("\nA4 : %dmm x %dmm",A41,A42);

  A51=A42;
  A52=A41/2;
  printf("\nA5 : %dmm x %dmm",A51,A52);

  A61=A52;
  A62=A51/2;
  printf("\nA6 : %dmm x %dmm",A61,A62);

  A71=A62;
  A72=A61/2;
  printf("\nA7 : %dmm x %dmm",A71,A72);

  A81=A72;
  A82=A71/2;
  printf("\nA8 : %dmm x %dmm",A81,A82);

  return 0;
}
