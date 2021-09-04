#include<iostream>

using namespace std;

class Shape{
   float area, perimeter, surfacearea, volume;
   public :

    void WhoAmI(float A, float P, float s, float V )
  {
      area = A;
      perimeter =P;
      surfacearea = s;
      volume = V;
  }
      void display()
      {
      cout<<" I am a two-dimensional shape  " << area << "\n" << perimeter << endl;
     // cout<<" I am a two-dimensional shape" << perimeter << endl;
      cout<<" I am a three-dimensional Shape  " << surfacearea << "\n" << volume << endl;
      //cout<<" I am a three-dimensional Shape" << volume << endl;
     }
  };
  class TwoDimensionalShape : public Shape
  {
     public :
          void WhoAmI(float area, float perimeter)
          {
            cout << "I am two-dimensional shape" <<endl;
          }

  };
  class circles : public TwoDimensionalShape
  {
      float area,perimeter;
      public :
        circles(float x, float y)
          {
              x = area;
              y = perimeter;
          }
    void WhoAmI()
          {
            return;
          }

  };
  class triangle : public TwoDimensionalShape
  {
      float area,perimeter;
      public :
       triangle(float x, float y)
          {
              x = area;
              y = perimeter;
          }
    void WhoAmI()
          {
            return;
          }
  };
  class Square : public TwoDimensionalShape
  {
      float area,perimeter;
      public :
       sqare(float x, float y)
          {
              x = area;
              y = perimeter;
          }
    void WhoAmI()
          {
            return;
          }
  };
  class rectangle : public TwoDimensionalShape
  {
      float area,perimeter;
      public :
        rectangle(float x, float y)
          {
              x = area;
              y = perimeter;
          }
    void WhoAmI()
          {
            return;
          }
  };

  class ThreeDimensionalShape : public Shape
  {
      public :
          void WhoAmI(float surfacearea, float volume)
          {
             cout << " I am a three-dimensional shape" <<endl;
          }
  };
  class cube : public ThreeDimensionalShape
  {
      float surfacearea,volume;
      public :
        cube(float a, float b)
          {
              a = surfacearea;
              b = volume;
          }
    void WhoAmI()
          {
            return;
          }
  };
  class cuboid : public ThreeDimensionalShape
  {
      float surfacearea,volume;
      public :
        cuboid(float a, float b)
          {
              a = surfacearea;
              b = volume;
          }
    void WhoAmI()
          {
            return;
          }
  };
  class cylinder : public ThreeDimensionalShape
  {
      float surfacearea,volume;
      public :
        cylinder(float a, float b)
          {
              a = surfacearea;
              b = volume;
          }
    void WhoAmI()
          {
            return;
          }
  };
  class sphere : public ThreeDimensionalShape
  {
      float surfacearea,volume;
      public :
        sphere(float a, float b)
          {
              a = surfacearea;
              b = volume;
          }
    void WhoAmI()
          {
            return;
          }
  };

int main(void)
{
    Shape S;
    S.display();

}


