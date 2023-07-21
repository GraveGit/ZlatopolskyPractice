#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

typedef std::pair<std::string, int> pair;

std::map<std::string, int> studentsHeight
{
  {"Smith", 180},
  {"Johnson", 165},
  {"Williams", 197},
  {"Brown", 181},
  {"Jones", 160},
  {"Miller", 168},
  {"Davis", 194},
  {"Garcia", 164},
  {"Rodriguez", 195},
  {"Wilson", 175},
  {"Martinez", 162},
  {"Anderson", 166},
  {"Taylor", 178},
  {"Thomas", 172},
  {"Hernandez", 169},
  {"Moore", 170},
  {"Anderson", 173},
  {"Jackson", 176},
  {"Lee", 163},
  {"Clark", 193},
  {"Walker", 155},
  {"Turner", 177},
  {"Parker", 191},
  {"Cooper", 202},
  {"Young", 133}

};

int main( int argc, char* argv[] )
{
  std::vector<pair> pairs;

  std::copy( studentsHeight.begin(), studentsHeight.end(), std::back_inserter<std::vector<pair>> ( pairs ) );

  std::sort( pairs.begin(), pairs.end(),
             []( const pair & l, const pair & r )
  {
    return l.second < r.second;
  } );

  for ( const auto& surname : pairs )
    std::cout << "Student " << surname.first << " is " << surname.second << " cm height" << std::endl;

  return 0;
}
