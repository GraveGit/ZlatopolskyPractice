//Дано вещественное число a. Пользуясь только операцией умножения, получить
#include <iostream>

int main( int argc, char* argv[] )
{
  const int a = 2;
  int temp = 0, secondTemp = 0;

  // a^3 и a^10 за 4 операции
  std::cout << "Get a^3 and a^10 in 4 operations:" << std::endl;
  temp = a * a;
  secondTemp = temp * a;
  std::cout << "a^3 = " << secondTemp << " ";
  secondTemp = temp * secondTemp;
  secondTemp = secondTemp * secondTemp;
  std::cout << "a^10 = " << secondTemp << std::endl << std::endl;

  // a^4 и a^20 за 5 операций
  std::cout << "Get a^4 and a^20 in 5 operations:" << std::endl;
  secondTemp = a * a;
  temp = secondTemp * secondTemp;
  std::cout << "a^4 = " << temp << " ";
  temp = temp * temp;
  temp = temp * secondTemp;
  temp = temp * temp;
  std::cout << "a^20 = " << temp << std::endl << std::endl;

  // a^5 и a^13 за 5 операций
  std::cout << "Get a^5 and a^13 in 5 operations:" << std::endl;
  secondTemp = a * a;
  temp = secondTemp * secondTemp;
  secondTemp = temp * a;
  std::cout << "a^5 = " << secondTemp << " ";
  temp = temp * temp;
  temp = temp * secondTemp;
  std::cout << "a^13 = " << temp << std::endl << std::endl;

  // a^5 и a^19 за 5 операций
  // За 5 операций умножения получить число в 19 степени невозможно, можно только за 6.
  std::cout << "Get a^5 and a^19 in 5 operations:" << std::endl;
  secondTemp = a * a;
  temp = secondTemp * secondTemp;
  secondTemp = temp * a;
  std::cout << "a^5 = " << secondTemp << " ";
  secondTemp = secondTemp * secondTemp * secondTemp * temp;
  std::cout << "a^19 = " << secondTemp << std::endl << std::endl;

  // a^2, a^5 и a^17 за 6 операций
  std::cout << "Get a^2, a^5 and a^17 in 6 operations:" << std::endl;
  secondTemp = a * a;
  std::cout << "a^2 = " << secondTemp << " ";
  temp = secondTemp * secondTemp;
  temp = temp * a;
  std::cout << "a^5 = " << temp << " ";
  secondTemp = temp * temp * temp * secondTemp;
  std::cout << "a^17 = " << secondTemp << std::endl << std::endl;

  // a^4, a^12 и a^28 за 6 операций
  std::cout << "Get a^4, a^12 and a^28 in 6 operations:" << std::endl;
  temp = a * a;
  temp = temp * temp;
  std::cout << "a^4 = " << temp << " ";
  secondTemp = temp * temp * temp;
  std::cout << "a^12 = " << secondTemp << " ";
  secondTemp = secondTemp * secondTemp * temp;
  std::cout << "a^28 = " << secondTemp << std::endl << std::endl;

  return 0;
}
