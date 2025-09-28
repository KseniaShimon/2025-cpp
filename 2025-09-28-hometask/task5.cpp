#include <stdio.h>
#include <iostream>
int main()
{
  int a;
  std::cin >> a;
  std::cout << "The next number for the number " << a << " is " << a+1 << ".";
  std::cout << "\n" << "The previous number for the number " << a << " is " << a-1 << ".";
  return 0;
}