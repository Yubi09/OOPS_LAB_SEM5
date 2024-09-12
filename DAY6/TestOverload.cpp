#include <iostream>
using namespace std;

class Test
{
  int marks[5];

public:
  void setMarks()
  {
    cout << "Enter Marks for 5 Subjects: ";
    for (int i = 0; i < 5; i++)
    {
      cin >> marks[i];
    }
  }

  int operator[](int i)
  {
    if(i < 0 || i >= 5)
    {
      cout << "Invalid Index" << endl;
      exit(0);
    }
    return marks[i];
  }

  void compare(Test t)
  {
    for (int i = 0; i < 5; i++)
    {
      if (marks[i] > t.marks[i])
      {
        cout << "Marks of Subject " << i + 1 << " are more in Object 1" << endl;
      }
      else if (marks[i] < t.marks[i])
      {
        cout << "Marks of Subject " << i + 1 << " are more in Object 2" << endl;
      }
      else
      {
        cout << "Marks of Subject " << i + 1 << " are equal in both Objects" << endl;
      }
    }
  }
};

int main()
{
  Test t1, t2;
  t1.setMarks();
  t2.setMarks();

  t1.compare(t2);


  return 0;
}