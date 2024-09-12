#include <iostream>
#include <string.h>
#include <stdexcept>
using namespace std;

class thinkingCap
{
  char green[10];
  char red[10];

public:
  void slots(char newGreen[], char newRed[])
  {
    if (strlen(newGreen) > 10 || strlen(newRed) > 10)
    {
      throw "Exception: String length is greater than 10";
    }
    strcpy(green, newGreen);
    strcpy(red, newRed);
  }
  void pushGreen() const
  {
    cout << "Green: " << green << endl;
  }
  void pushRed() const
  {
    cout << "Red: " << red << endl;
  }
};

int main()
{
  thinkingCap user1, user2;
  try
  {
    user1.slots("Green", "Red");
    user1.pushGreen();
    user1.pushRed();
    user2.slots("Greengreengreen", "Red");
    user2.pushGreen();
    user2.pushRed();
  }
  catch (const char *msg)
  {
    cout << msg << endl;
  }
  catch (...)
  {
    cout << "Exception occurred!!" << endl;
  }
}