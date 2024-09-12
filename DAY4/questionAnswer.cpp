#include <iostream>
#include <stdarg.h>
using namespace std;

int totalScore(int n, ...)
{
  va_list args;
  va_start(args, n);
  int firstHighest = 0;
  int secondHighest = 0;
  int thirdHighest = 0;

  for (int i = 0; i < n; i++)
  {
    int marks = va_arg(args, int);
    if (marks > firstHighest)
    {
      thirdHighest = secondHighest;
      secondHighest = firstHighest;
      firstHighest = marks;
    }
    else if (marks > secondHighest)
    {
      thirdHighest = secondHighest;
      secondHighest = marks;
    }
    else if (marks > thirdHighest)
    {
      thirdHighest = marks;
    }
  }
  int total = firstHighest + secondHighest + thirdHighest;

  va_end(args);

  return total;
}

int main()
{
  int questions[5];
  int marks;
  int n;
  cout << "Enter the number of questions attempted: ";
  cin >> n;
  if (n < 3 || n > 5)
  {
    cout << "Invalid input!!" << endl;
    return 0;
  }
  for (int i = 0; i < n; i++)
  {
    cout << "Enter the marks of question(0-15) " << i + 1 << ": ";
    cin >> questions[i];
    if (questions[i] < 0 || questions[i] > 15)
    {
      cout << "Invalid Input!!" << endl;
      return 0;
    }
  }
  if (n == 3)
  {
    marks = totalScore(n, questions[0], questions[1], questions[2]);
  }
  else if (n == 4)
  {
    marks = totalScore(n, questions[0], questions[1], questions[2], questions[3]);
  }
  else if (n == 5)
  {
    marks = totalScore(n, questions[0], questions[1], questions[2], questions[3], questions[4]);
  }

  cout << "Total score: " << marks << endl;
}