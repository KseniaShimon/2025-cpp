#include <cstdio>

  
long long a;
long long b;
  
int main(int argc, char** argv){
  scanf("%lld, &a)
  scanf("%lld, &b);
  printf("%lld %lld", ((b % a + a) / a) + ((b-1) / a), b - a*((b-1)/a));
  return 0;
}