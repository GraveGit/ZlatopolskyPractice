//Около стены наклонно стоит палка длиной 4,5 м. Один ее конец находится
// на расстоянии 3 м от стены. Нижний конец палки начинает скользить в
// плоскости, перпендикулярной стене. Определить значение угла между пал-
// кой и полом (в градусах) с момента начала скольжения до падения палки че-
// рез каждые 0,2 м.

#include <iostream>
#include <math.h>

#define PI 3.14159265

int main( int argc, char* argv[] )
{
  double cathet = 3;
  const double hypotenuse = 4.5;

  for ( cathet; cathet < hypotenuse; cathet += 0.2 )
    std::cout << "For cathet = " << cathet << " and hypothenuse = " << hypotenuse << " angle = " <<
              acos ( cathet / hypotenuse ) * 180.0 / PI << std::endl;

  return 0;
}
