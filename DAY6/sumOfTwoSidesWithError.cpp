#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

class TriangleException : public exception
{
public:
  TriangleException()
  {
    cout << "Error Occurred!!!" << endl;
  }

  const char *what() const throw()
  {
    return "Invalid Sides for Triangle";
  }
};

class Triangle
{
  float a, b, c;

public:

  void setSides()
  {
    cout << "Enter Sides of Triangle: ";
    cin >> a >> b >> c;
  }

  void calculateArea()
  {
    if (a + b <= c || b + c <= a || c + a <= b)
    {
      throw TriangleException();
    }

    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area of Triangle: " << area << endl;
  }
};

int main()
{
  Triangle t;
  t.setSides();

  try
  {
    t.calculateArea();
  }
  catch (TriangleException &e)
  {
    cout << e.what() << endl;
  }

  return 0;
}