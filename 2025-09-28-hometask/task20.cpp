#include <cstdio>
#include <stdlib.h>
  
long long a;
long long b;

int main(int argc, char** argv){
  scanf("%lld %lld", &a, &b);
  printf("%lld %lld %lld", b / a, b % a, ((a - b % a)) % a);
  return 0;
}