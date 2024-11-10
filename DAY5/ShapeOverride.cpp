#include <iostream>
using namespace std;
class Shape
{
public:
  virtual void area() = 0;
  virtual void perimeter() = 0;
};
class Square : public Shape
{
  int side;

public:
  void setSquare()
  {
    
    cout << "Enter Side of Square: ";
    cin >> side;
  }
  void area()
  {
    cout << "Area of Square: " << side * side << endl;
  }

  void perimeter()
  {
    cout << "Perimeter of Square: " << 4 * side << endl;
  }
};
class Rectangle : public Shape
{
  int length, breadth;

public:

  void setRectangle()
  {
    cout << "Enter Length of Rectangle: ";
    cin >> length;
    cout << "Enter Breadth of Rectangle: ";
    cin >> breadth;
  }

  void area()
  {
    cout << "Area of Rectangle: " << length * breadth << endl;
  }

  void perimeter()
  {
    cout << "Perimeter of Rectangle: " << 2 * (length + breadth) << endl;
  }
};

int main()
{
  Shape *s;
  Square sq;
  sq.setSquare();
  Rectangle r;
  r.setRectangle();
  s = &sq;
  s->area();
  s->perimeter();
  s = &r;
  s->area();
  s->perimeter();

  return 0;
}