#include <iostream>
#include"Shape.h"
#include"rectangle.h"
#include"circle.h"
#include"Square.h"
#include<iomanip>
using namespace std;

int main()
{
  int cx, cy, cr, rx, ry, rw, rh, sx, sy, ss;
  cin >> cx >> cy >> cr;
  cin >> rx >> ry >> rw >> rh;
  cin >> sx >> sy >> ss;

  // circle center = (cx, cy), radiuis = r
  Circle c(cx, cy, cr);
  // rectangle top left point = (rx, ry), wide = rw, height = rh
  Rectangle r(rx, ry, rw, rh);
  // square top left point = (sx, sy), length of side = ss
  Square s(sx, sy, ss);
  Shape* shape[3] = {&c, &r, &s};
  for (int i = 0; i < 3; ++i) {
    cout << "Shape " << i << ": Position ";
    shape[i]->show_position();
    cout << " Area " << fixed << setprecision(2) << shape[i]->area();
    cout << " Circum " << fixed << setprecision(2) << shape[i]->circum() << endl;
  }

  return 0;
}
