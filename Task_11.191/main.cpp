//11.191.*Дано натуральное число n. Определить количество различных цифр в нем.
// Например, в числе 1234 количество различных цифр равно 4, в числе
// 22424 — 2, в числе 333 — 1.
#include <iostream>
#include <set>

int main( int argc, char* argv[] )
{
  int number = 0;
  std::set<int> numberArray;
  std::cout << "Enter the number: ";
  std::cin >> number;

  while ( number > 0 )
  {
    numberArray.insert( number % 10 );
    number /= 10;
  }

  std::cout << "Number contains " << numberArray.size() << " different digit(s)";
  return 0;
}
