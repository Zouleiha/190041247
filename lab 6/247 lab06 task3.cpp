#include<iostream>
#include<math.h>

using namespace std;

class Coordinate{
  float abscissa, ordinate;
  public:
  Coordinate(float x, float y)
  {
      abscissa = x;
      ordinate = y;
  }
  Coordinate()
  {
      abscissa = 0;
      ordinate = 0;
  }
  float getDistance(Coordinate c)
  {
    float distance;
     distance = sqrt(pow((ordinate-c.ordinate),2)+pow((abscissa-c.abscissa),2));
     return distance;
  }
  float getDistance()
  {
     float distance;
     distance = sqrt(pow(ordinate,2)+pow(abscissa,2));
     return distance;
  }
  void move_x(float val)
  {
     abscissa += val;
  }
  void move_y(float val)
  {
     ordinate += val;
  }
  void move(float val)
  {
     move_x(val);
     move_y(val);
  }
  bool operator>(Coordinate c1)
  {
      if(getDistance() > c1.getDistance())
        return true;
      else
        return false;
  }
  bool operator<(Coordinate c1)
  {
      if(getDistance() < c1.getDistance())
        return true;
      else
        return false;
  }
  bool operator>=(Coordinate c1)
  {
      if(getDistance() >= c1.getDistance())
        return true;
      else
        return false;
  }
  bool operator<=(Coordinate c1)
  {
      if(getDistance() <= c1.getDistance())
        return true;
      else
        return false;
  }
  bool operator==(Coordinate c1)
  {
      if(getDistance() == c1.getDistance())
        return true;
      else
        return false;
  }
  bool operator!=(Coordinate c1)
  {
      if(getDistance() != c1.getDistance())
        return true;
      else
        return false;
  }
  Coordinate operator++()
  {
      ordinate++;
      abscissa++;
  }
  Coordinate operator++(int)
  {
      ++ordinate;
      ++abscissa;
  }

  Coordinate operator--()
  {
      ordinate--;
      abscissa--;
  }

  Coordinate operator--(int)
  {
      --ordinate;
      --abscissa;
  }

};

int main()
{
    Coordinate  c1(2,8), c2(4,6), c3(3,9);
    c1.getDistance();
    cout << "The distance of c1 from origin is " << c1.getDistance() << endl;
    cout << "The distance between c1 and c2 is " << c1.getDistance(c2) << endl;

    c1++;
    cout << "c1++ is " << c1.getDistance() << endl;
}

