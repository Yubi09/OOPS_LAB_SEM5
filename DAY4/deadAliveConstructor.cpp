#include <iostream>
#include <string.h>

using namespace std;

class MyClass
{
private:
  string name;
  static int alive, dead, total;

public:
  MyClass(const string &objName) : name(objName)
  {
    alive++;
    total++;
    cout << "Constructor called for object: " << name << endl;
    cout << "Alive: " << alive << endl;
    cout << "Dead: " << dead << endl;
    cout << "Total: " << total << endl;
  }

  ~MyClass()
  {
    alive--;
    dead++;
    cout << "Destructor called for object: " << name << endl;
    cout << "Alive: " << alive << endl;
    cout << "Dead: " << dead << endl;
    cout << "Total: " << total << endl;
  }
};
int MyClass::alive = 0;
int MyClass::dead = 0;
int MyClass::total = 0;
int main()
{
  cout << "Creating object A\n";
  MyClass objA("A");

  {
    cout << "Creating object B inside a block\n";
    MyClass objB("B");
    cout << "Exiting the block." << endl;
  }

  cout << "Creating object C\n";
  MyClass objC("C");
  cout << "Exiting the main." << endl;
  return 0;
}