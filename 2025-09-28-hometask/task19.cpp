#include <cstdio>

  
long long a;
long long b;

int main(int argc, char** argv){
  scanf("%lld %lld", &a, &b);
  printf("%lld", (a % b) * (b % a) + 1);
  return 0;
}