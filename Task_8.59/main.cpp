//8.59.*Найти все простые несократимые дроби, заключенные между 0 и 1, знамена-
// тели которых не превышают 7 (дробь задается двумя натуральными числами — числителем и знаменателем).

#include <iostream>

int main( int argc, char* argv[] )
{
  int remains;

  for ( int denominator = 1; denominator <= 7; denominator++ ) //Знаменатель
  {
    for ( int numerator = 1; numerator < denominator; numerator++ )//Числитель
    {
      remains = denominator % numerator;

      if ( numerator == 1 )
        std::cout << numerator << "/" << denominator << " ";
      else if ( remains == 1 )
        std::cout << numerator << "/" << denominator << " ";
      else if ( remains != 0 )
      {
        if ( ( denominator % remains != 0 ) && ( numerator % remains != 0 ) )
          std::cout << numerator << "/" << denominator << " ";
      }
    }
  }

  return 0;
}
