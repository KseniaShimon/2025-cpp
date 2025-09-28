#include <cstdio>
#include <stdlib.h>
  
long long a;
long long b;

int main(int argc, char** argv){
  scanf("%lld %lld", &a, &b);
  b = abs(b);
  printf("%lld", (b + a % b) % b);
  return 0;
}