#include <iostream>
#include <clocale>
#include <windows.h>
#include <map>

std::map<int, std::string> digitsMap =
{
  {0, ""},
  {1, "один"},
  {2, "два"},
  {3, "три"},
  {4, "четыре"},
  {5, "пять"},
  {6, "шесть"},
  {7, "семь"},
  {8, "восемь"},
  {9, "девять"}
};

std::map<int, std::string> decimalsMap =
{
  {0, ""},
  {1, "десять"},
  {2, "двадцать"},
  {3, "тридцать"},
  {4, "сорок"},
  {5, "пятьдесят"},
  {6, "шестьдесят"},
  {7, "семьдесят"},
  {8, "восемьдесят"},
  {9, "девяносто"}
};

std::map<int, std::string> hundredsMap =
{
  {0, ""},
  {1, "сто"},
  {2, "двести"},
  {3, "триста"},
  {4, "четыреста"},
  {5, "пятьсот"},
  {6, "шестьсот"},
  {7, "семьсот"},
  {8, "восемьсот"},
  {9, "девятьсот"}
};

std::map<int, std::string> decimalsFromTenToNineteenMap =
{
  {10, "десять"},
  {11, "одиннадцать"},
  {12, "двенадцать"},
  {13, "тринадцать"},
  {14, "четырнадцать"},
  {15, "пятнадцать"},
  {16, "шестнадцать"},
  {17, "семнадцать"},
  {18, "восемнадцать"},
  {19, "девятнадцать"}
};

int main( int argc, char* argv[] )
{
  setlocale( LC_ALL, "PL_pl.UTF-8" );
  SetConsoleOutputCP( CP_UTF8 );

  int number = 0;
  std::cout << "Введите число (1-1000): ";
  std::cin >> number;

  int hundreds = number / 100;
  int decimals = ( number % 100 ) / 10 ;
  int digits = number % 10;

  std::string result;

  if ( hundreds > 0 )
    result += hundredsMap[hundreds] + " ";

  if ( decimals == 1 )
    result += decimalsFromTenToNineteenMap[number % 100];
  else
  {
    if ( decimals > 0 )
      result += decimalsMap[decimals] + " ";

    if ( digits > 0 )
      result += digitsMap[digits];
  }

  std::cout << result;

  return 0;
}
