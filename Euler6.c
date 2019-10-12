#include <stdio.h>
#include <stdlib.h>

float squaredSum(float cap) {
  float s = 0;
  float n;
  for (n=1;n<=cap;n++) {
    s += n;
  }
  //printf("%f\n",s);
  return s*s;
}

float squaresSummed(float cap) {
  float s = 0;
  float n;
  for (n=1;n<=cap;n++) {
    s += (n*n);
  }
  return s;
}

int main() {
  float s1 = squaredSum(100);
  float s2 = squaresSummed(100);
  //printf("%f\n",s1);
  //printf("%f\n",s2);
  printf("%f\n",(s1-s2));

}
