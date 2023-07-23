//Дан двумерный массив. Разместить его строки так, чтобы при их просмотре
//сверху вниз:
//а) максимальные значения в каждой строке образовали неубывающую по-
//следовательность;
//б) минимальные значения в каждой строке образовали невозрастающую по-
//следовательность.
#include <iostream>
#include <random>
#include <algorithm>

bool compareRowsMax( const std::vector<int>& row1, const std::vector<int>& row2 )
{
  return *std::max_element( row1.begin(), row1.end() ) < *std::max_element( row2.begin(), row2.end() );
}

bool compareRowsMin( const std::vector<int>& row1, const std::vector<int>& row2 )
{
  return *std::min_element( row1.begin(), row1.end() ) > *std::min_element( row2.begin(), row2.end() );
}

int main( int argc, char* argv[] )
{
  std::random_device rd;
  std::mt19937 gen( rd() );
  std::uniform_int_distribution<int> dis( 0, 100 );
  std::vector<std::vector<int>> numArray;

  int n = 0;
  std::cout << "Enter array size: ";
  std::cin >> n;

  for ( int i = 0; i < n; i++ )
  {
    std::vector<int> row;

    for ( int j = 0; j < n; j++ )
      row.push_back( dis( gen ) );

    numArray.push_back( row );
  }

  std::cout << "The original array" << std::endl;

  for ( const auto& row : numArray )
  {
    for ( const auto& element : row )
      std::cout << element << " ";

    std::cout << std::endl;
  }

  std::sort( numArray.begin(), numArray.end(), compareRowsMax );

  std::cout << std::endl << "a)" << std::endl;

  for ( const auto& row : numArray )
  {
    for ( const auto& element : row )
      std::cout << element << " ";

    std::cout << std::endl;
  }

  std::sort( numArray.begin(), numArray.end(), compareRowsMin );

  std::cout << std::endl << "b)" << std::endl;

  for ( const auto& row : numArray )
  {
    for ( const auto& element : row )
      std::cout << element << " ";

    std::cout << std::endl;
  }

  return 0;
}
