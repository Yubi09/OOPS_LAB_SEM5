#include <iostream>

class Shape
{
protected:
  int side1;

public:
  Shape()
  {
    side1 = 0;
  }
};

class Square : protected Shape
{
public:
  void setSide()
  {
    std::cout << "Enter the side of the square: ";
    std::cin >> side1;
  }
  void getArea()
  {
    std::cout << "The area of the square: " << side1 * side1 << std::endl;
  }
};

class Rectangle : protected Shape
{
  int side2;

public:
  void setSides()
  {
    std::cout << "Enter the length and breadth of the rectangle: ";
    std::cin >> side1 >> side2;
  }
  void getArea()
  {
    std::cout << "The area of the rectangle is: " << side1 * side2 << std::endl;
  }
};

int main()
{
  Square square;
  square.setSide();
  Rectangle rectangle;
  rectangle.setSides();
  square.getArea();
  rectangle.getArea();

  return 0;
}