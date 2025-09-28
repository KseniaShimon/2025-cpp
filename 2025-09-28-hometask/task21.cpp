#include <cstdio>
#include <stdlib.h>
  
long long a;
long long b;

int main(int argc, char** argv){
  scanf("%lld %lld", &a, &b);
  printf("%lld", ((a * b) % 109 + 109) % 109 + 1);
  return 0;
}