//Имеются два файла одинакового размера, элементами которого являются
// отдельные символы. Выяснить, совпадают ли их элементы. Если нет, то
// получить номер первого компонента, в котором эти файлы отличаются
// друг от друга.
#include <iostream>
#include <fstream>
#include <vector>

int main( int argc, char* argv[] )
{
  std::vector<char> character;

  std::ifstream textFile( "first.txt" );
  char buff;
  textFile.get( buff );

  while ( !textFile.eof() )
  {
    character.push_back( buff );
    textFile.get( buff );
  }

  textFile.close();
  textFile.open( "second.txt" );
  textFile.get( buff );

  for ( int i = 0; i < character.size(); i++ )
  {
    if ( buff != character[i] )
    {
      std::cout << "In first file: " << character[i] << " In second file: " << buff << ", It is the " << i + 1 << " element";
      return 0;
    }

    textFile.get( buff );
  }

  std::cout << "Files are the same";
  textFile.close();
  return 0;
}
