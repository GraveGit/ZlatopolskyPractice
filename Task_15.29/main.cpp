//Имеется текстовый файл. Все четные строки этого файла записать во второй
// файл, а нечетные — в третий файл. Порядок следования строк сохраняется.
#include <iostream>
#include <fstream>

int main( int argc, char* argv[] )
{
  int i = 1;
  std::ifstream firstText( "first.txt" );
  std::ofstream secondText( "D:/ZlatopolskyPractice/Tasks/Task_15.29/second.txt" );
  std::ofstream thirdText( "D:/ZlatopolskyPractice/Tasks/Task_15.29/third.txt" );
  std::string textString;

  while ( !firstText.eof() )
  {
    std::getline( firstText, textString );
    std::cout << textString << std::endl;

    if ( i % 2 == 0 )
      secondText << textString << std::endl;
    else
      thirdText << textString << std::endl;

    i++;
  }

  firstText.close();
  secondText.close();
  thirdText.close();
  return 0;
}
