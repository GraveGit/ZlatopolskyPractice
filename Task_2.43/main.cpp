/*Даны два целых числа a и b. Если a делится на b или b делится на a, то вывес-
ти 1, иначе — любое другое число. Условные операторы и операторы цикла не использовать.*/
#include <iostream>

int main( int argc, char* argv[] )
{
  int a = 0, b = 0;
  double result = 0.0;

  std::cout << "Enter number a: ";
  std::cin >> a;
  std::cout << "Enter number b: ";
  std::cin >> b;

  std::cout << "Result: " << ( ( ( a / b ) * ( b % a ) - a ) * ( ( b / a ) * ( a % b ) - b ) % ( a * b ) + 1 );

  return 0;
}
