//16.27.*Вычислить значение числа pi методом Монте-Карло с точностью 0,0001.
#include <iostream>
#include <random>
#include <iomanip>

int main( int argc, char* argv[] )
{
  int numPoints = 100000000;

  std::random_device rd;
  std::mt19937 gen( rd() );
  std::uniform_real_distribution<double> dis( 0.0, 1.0 );

  int numPointsInsideCircle = 0;

  for ( int i = 0; i < numPoints; ++i )
  {
    double x = dis( gen );
    double y = dis( gen );

    if ( x * x + y * y <= 1.0 )
      numPointsInsideCircle++;
  }

  double pi = 4.0 * numPointsInsideCircle / numPoints;

  std::cout << std::setprecision( 5 ) << "Pi value is: " << pi << std::endl;

  return 0;
}
