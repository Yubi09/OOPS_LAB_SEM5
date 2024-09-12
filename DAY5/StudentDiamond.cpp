#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
  int roll;

public:
  void setRoll()
  {
    cout << "Enter Roll: ";
    cin >> roll;
  }

  void displayRoll()
  {
    cout << "Roll: " << roll << endl;
  }
};

class Test : virtual public Student
{
  protected:
  int marks;

public:
  void setMarks()
  {
    cout << "Enter Marks: ";
    cin >> marks;
  }

  void displayMarks()
  {
    cout << "Marks: " << marks << endl;
  }
};

class Sports : virtual public Student
{
  protected:
  int score;

public:
  void setScore()
  {
    cout << "Enter Score: ";
    cin >> score;
  }

  void displayScore()
  {
    cout << "Score: " << score << endl;
  } 
};

class Result : public Test, public Sports
{
  int total;

public:
  void displayResult()
  {
    total = marks + score;
    displayRoll();
    displayMarks();
    displayScore();
    cout << "Total: " << total << endl;
  }
};

int main()
{
  Result r;
  r.setRoll();
  r.setMarks();
  r.setScore();
  r.displayResult();
  return 0;
}