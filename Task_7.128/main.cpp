//Натуральное число называется совершенным, если оно равно сумме своих
//делителей, включая 1 и, естественно, исключая это самое число. Например,
//число 6 — совершенное (6=1+2+3). Дано натуральное число. Выяснить,
//является ли оно совершенным.

#include <iostream>

int main( int argc, char* argv[] )
{
  int number = 0, counter = 0;
  std::cout << "Enter the number: ";
  std::cin >> number;

  for ( int i = 1; i <= ( number / 2 ); i++ )
  {
    if ( number % i == 0 )
      counter += i;
  }

  if ( counter == number )
    std::cout << number << " is a perfect number";
  else
    std::cout << number << " is not a perfect number";

  return 0;
}
