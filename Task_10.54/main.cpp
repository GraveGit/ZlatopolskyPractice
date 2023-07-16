//Написать рекурсивную процедуру перевода натурального числа из десятичной системы счисления в двоичную

#include <iostream>

void binaryConvert( int decimalNumber )
{
  if ( decimalNumber > 0 )
  {
    binaryConvert( decimalNumber / 2 );
    std::cout << decimalNumber % 2;
  }
}

int main( int argc, char* argv[] )
{
  int decimalNumber = 0;
  std::cout << "Enter decimal number: ";
  std::cin >> decimalNumber;

  binaryConvert( decimalNumber );
  return 0;
}
