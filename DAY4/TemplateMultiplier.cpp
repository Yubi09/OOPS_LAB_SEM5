#include <iostream>
using namespace std;
template <typename T, typename U>
class Multiplier
{
  T value1;
  U value2;
public:
  void setValues()
  {
    cout << "Enter value 1: ";
    cin >> value1;
    cout << "Enter value 2: ";
    cin >> value2;
  }
  void multiply()
  {
    cout << "Multiplication of " << value1 << " and " << value2 << " is: " << value1 * value2 << endl;
  }
};
int main()
{
  Multiplier<int, double> MultiplyIntDouble;
  MultiplyIntDouble.setValues();
  MultiplyIntDouble.multiply();
  return 0;
}