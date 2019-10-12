#include <stdio.h>
#include <stdlib.h>

double getN(){
  double n;
  n = 1;
  printf("%d\n",n);
  int i;
  for (i=0;i<1000;i++){
    n += 2;
    if (i%100 == 0) printf("%d\n",n);
  }
  return n;
}

int main() {
  double n = getN();
  printf("%d\n",n);
}
