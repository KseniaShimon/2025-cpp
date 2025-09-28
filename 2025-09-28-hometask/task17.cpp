#include <cstdio>

  
long long a;
  
int main(int argc, char** argv){
  scanf("%lld", &a);
  printf("%lld", (a % 1000 / 100) + ((a % 100) / 10) + a  % 10);
  return 0;
}