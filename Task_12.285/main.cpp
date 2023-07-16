//12.285.*Шахматную доску будем представлять в виде квадратного символьного
//массива размером 8x8.
//Даны натуральные числа v и g (1 v 8, 1 g 8),
//указывающие номера вертикали и горизонтали для поля, на котором стоит
//шахматная фигура. Необходимо поля, находящиеся под угрозой данной фи-
//гуры, положить равными символу "*", а остальные — символу "0". Рас-
//смотреть случаи, когда заданная фигура:

//a) ладья; c) ферзь;
//b) слон; d) конь.

#include <iostream>

bool DiagonalCheck( int myPositionHorizontal, int myPositionVertical, int positionHorizontal, int positionVertical )
{
  if ( ( positionHorizontal - myPositionHorizontal == positionVertical - myPositionVertical ) ||
       ( myPositionHorizontal - positionHorizontal == positionVertical - myPositionVertical ) ||
       ( positionHorizontal - myPositionHorizontal == myPositionVertical - positionVertical ) ||
       ( myPositionHorizontal - positionHorizontal == myPositionVertical - positionVertical ) )
    return 1;
  else return 0;
}

bool HorseCheck( int myPositionHorizontal, int myPositionVertical, int positionHorizontal, int positionVertical )
{
  if ( ( myPositionHorizontal + 1 == positionHorizontal && myPositionVertical - 2 == positionVertical ) ||
       ( myPositionHorizontal + 2 == positionHorizontal && myPositionVertical - 1 == positionVertical ) ||
       ( myPositionHorizontal + 2 == positionHorizontal && myPositionVertical + 1 == positionVertical ) ||
       ( myPositionHorizontal + 1 == positionHorizontal && myPositionVertical + 2 == positionVertical ) ||
       ( myPositionHorizontal - 1 == positionHorizontal && myPositionVertical + 2 == positionVertical ) ||
       ( myPositionHorizontal - 2 == positionHorizontal && myPositionVertical + 1 == positionVertical ) ||
       ( myPositionHorizontal - 2 == positionHorizontal && myPositionVertical - 1 == positionVertical ) ||
       ( myPositionHorizontal - 1 == positionHorizontal && myPositionVertical - 2 == positionVertical ) )
    return 1;
  else return 0;
}

int main( int argc, char* argv[] )
{
  int horizontal = 0, vertical = 0;
  char variant;
  std::cout << "Enter task number: " << std::endl;
  std::cin >> variant;
  std::cout << "Enter horizontal position(1-8): " << std::endl;
  std::cin >> horizontal;
  std::cout << "Enter vertical position(1-8): " << std::endl;
  std::cin >> vertical;
  char chessDesk[8][8];

  for ( int i = 0; i < 8; i++ )
  {
    for ( int j = 0; j < 8; j++ )
      chessDesk[i][j] = '0';
  }

  switch ( variant )
  {
    case 'a':
      for ( int i = 0; i < 8; i++ )
      {
        for ( int j = 0; j < 8; j++ )
        {
          if ( j == horizontal - 1 || i == ( 7 - ( vertical - 1 ) ) )
            chessDesk[i][j] = '*';
        }
      }

      break;

    case 'b':
      for ( int i = 0; i < 8; i++ )
      {
        for ( int j = 0; j < 8; j++ )
        {
          if ( DiagonalCheck( horizontal - 1, 7 - ( vertical - 1 ), j, i ) )
            chessDesk[i][j] = '*';
        }
      }

      break;

    case 'c':
      for ( int i = 0; i < 8; i++ )
      {
        for ( int j = 0; j < 8; j++ )
        {
          if ( j == horizontal - 1 || i == ( 7 - ( vertical - 1 ) ) ||
               DiagonalCheck( horizontal - 1, 7 - ( vertical - 1 ), j, i ) )
            chessDesk[i][j] = '*';
        }
      }

      break;

    case 'd':
      for ( int i = 0; i < 8; i++ )
      {
        for ( int j = 0; j < 8; j++ )
        {
          if ( HorseCheck( horizontal - 1, 7 - ( vertical - 1 ), j, i ) )
            chessDesk[i][j] = '*';
        }
      }

      break;

    default:
      break;
  }

  for ( int i = 0; i < 8; i++ )
  {
    for ( int j = 0; j < 8; j++ )
      std::cout << chessDesk[i][j] << " ";

    std::cout << std::endl;
  }

  return 0;
}
