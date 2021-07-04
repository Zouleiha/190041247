#include<iostream>

using namespace std;

class Rectangle{
     float length, width;
 public :
     float Perimeter()
     {
        return 2*(length+width);
     }
     float Area()
     {
        return length * width;
     }

     Rectangle(float len,float wid)
     {
         length=len;
         width=wid;
     }
     Rectangle()
     {
         length=1;
         width=1;
     }
     void setLength(float value)
     {
         if(value>=1.0&&value<20.0)
            length=value;
     }
     void setWidth(float value)
     {
         if(value>=1.0&&value<20.0)
            width=value;
     }
     float getLength()
     {
         return length;
     }
     float getWidth()
     {
         return width;
     }
};

int main()
{
    Rectangle R;
    R.setLength(10);
    cout<<"Length is: "<< R.getLength()<<endl;
    R.setWidth(20);
    cout<<"Width is: " << R.getWidth()<<endl;
    cout<<"Area is: " << R.Area()<<endl;
    cout<<"Perimeter is: " << R.Perimeter()<<endl;

}
