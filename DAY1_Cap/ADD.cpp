#include<iostream>

class Add 
{
  int a, b;
  public:
  Add()
  {
    a = 0;
    b = 0;
  }
  void getData()
  {
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
  }
  void sum()
  {
    std::cout << "Sum of " << a << " and " << b << " is " << a+b << std::endl;
  }
};

int main()
{
  Add obj;
  obj.getData();
  obj.sum();
  return 0;
}