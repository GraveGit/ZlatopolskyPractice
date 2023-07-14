//Составить программу, которая ведет учет очков, набранных каждой командой
// при игре в баскетбол. Количество очков, полученных командами в ходе игры,
// может быть равно 1, 2 или 3. После любого изменения счет выводить на
// экран. После окончания игры выдать итоговое сообщение и указать номер
// команды-победительницы. Окончание игры условно моделировать вводом
// количества очков, равного нулю.

#include <iostream>

int main( int argc, char* argv[] )
{
  int firstTeamPoints = 0, secondTeamPoints = 0, pointInput = 1, teamId = 0;

  while ( pointInput != 0 )
  {
    std::cout << "The score is: Red Team - " << firstTeamPoints << " Blue Team - " << secondTeamPoints << std::endl;
    std ::cout << "What team gets the point:" << std::endl << "1. Red Team" << std::endl << "2. Blue Team" << std::endl;
    std::cin >> teamId;
    std ::cout << "Enter points(1-3):" << std::endl;
    std::cin >> pointInput;

    if ( pointInput > 3 || pointInput < 0 )
    {
      std ::cout << "You must enter points 1-3 or 0 to end the game:" << std::endl;
      continue;
    }

    switch ( teamId )
    {
      case 1:
        firstTeamPoints += pointInput;
        break;

      case 2:
        secondTeamPoints += pointInput;
        break;

      default:
        std::cout << "Wrong team ID ";
        break;
    }
  }

  std::cout << "The score is: Red Team - " << firstTeamPoints << " Blue Team - " << secondTeamPoints << std::endl;

  if ( firstTeamPoints > secondTeamPoints )
    std::cout << "Red Team Wins";
  else if ( firstTeamPoints < secondTeamPoints )
    std::cout << "Blue Team Wins";
  else
    std::cout << "Draw";

  return 0;
}
