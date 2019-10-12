#include <stdio.h>
#include <stdlib.h>

float sum1000();
float squaredSum(float cap);
float squaresSummed(float cap);
float solveSix(float cap);
double getN();

//PROBLEM 1:
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

//PROBLEM 6:
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

float solveSix(float cap) {
  float s1 = squaredSum(cap);
  float s2 = squaresSummed(cap);
}

//PROBLEM 16:
//I tried it but double couldn't store all digits of 2^1000
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
  printf("Problem 1: %f\n",sum1000());
  printf("Problem 6: %f\n",solveSix(100));

}
