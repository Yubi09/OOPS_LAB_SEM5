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
    if (i < 0 || i >= 5)
    {
      cout << "Invalid Index" << endl;
      exit(0);
    }
    return marks[i];
  }
};

int main()
{
  Test t1, t2;
  t1.setMarks();
  t2.setMarks();

  for (int i = 0; i < 5; i++)
  {
    if (t1[i] > t2[i])
    {
      cout << "Student 1 has more marks in Subject " << i + 1 << endl;
    }
    else if (t1[i] < t2[i])
    {
      cout << "Student 2 has more marks in Subject " << i + 1 << endl;
    }
    else
    {
      cout << "Both Students have same marks in Subject " << i + 1 << endl;
    }
  }

  return 0;
}