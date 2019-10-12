#include <stdio.h>
#include <stdlib.h>

float sum1000() {
  int sum = 0;
  unsigned int x;
  for (x = 3; x<1000; x+=3){
    sum += x;
  }
  for (x=5; x<1000;x+=5) {
    if (x%3 != 0) sum += x;
  }
  return sum;
}

int main() {
  printf("%f",sum1000());

}
