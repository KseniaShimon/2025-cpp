#include <cstdio>

  
long long a;
long long b;
  
int main(int argc, char** argv){
  scanf("%lld %lld", &a, &b);
  printf("%lld", (a*b) - (a + b - 1) + 1);
  return 0;
}