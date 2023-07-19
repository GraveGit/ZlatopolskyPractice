//11.191.*Дано натуральное число n. Определить количество различных цифр в нем.
// Например, в числе 1234 количество различных цифр равно 4, в числе
// 22424 — 2, в числе 333 — 1.
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

int main( int argc, char* argv[] )
{
  int number = 0, numberCounter = 0;
  std::vector<int> numberArray;
  std::cout << "Enter the number: ";
  std::cin >> number;
  std::unordered_map<int, int> counter;

  while ( number > 0 )
  {
    numberArray.push_back( number % 10 );
    number /= 10;
  }

  for ( const auto& element : numberArray )
    counter[element]++;

  for ( const auto& pair : counter )
    std::cout << "Number " << pair.first << " is here " << pair.second << " times " << std::endl;

  for ( const auto& pair : counter )
  {
    if ( pair.second >= 1 )
      numberCounter++;
  }

  std::cout << "Number contains " << numberCounter << " different digit(s)";
  return 0;
}
