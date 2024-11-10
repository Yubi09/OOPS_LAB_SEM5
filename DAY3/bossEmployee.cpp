#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
class Employee
{
  string name;
  int age;
  int id;
  int salary;
public:
  Employee()
  {
    id = rand() % 1000;
  }
  void setEmployee()
  {
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the age: ";
    cin >> age;
  }
  friend class Boss;
};
class Boss
{
public:
  void setSalary(Employee &emp)
  {
    cout << "Enter the salary: ";
    cin >> emp.salary;
  }
  void increaseSalary(Employee &emp)
  {
    cout << "Enter the increment: ";
    int increment;
    cin >> increment;
    emp.salary += increment;
  }
  void displayEmployee(Employee &emp)
  {
    cout << "Name: " << emp.name << endl;
    cout << "Age: " << emp.age << endl;
    cout << "ID: " << emp.id << endl;
    cout << "Salary: " << emp.salary << endl;
  }
};

int main()
{
  srand(time(0));
  cout << "Enter the number of employees: ";
  int n;
  cin >> n;
  Employee *emp = new Employee[n];
  Boss boss;
  for (int i = 0; i < n; i++)
  {
    emp[i].setEmployee();
    boss.setSalary(emp[i]);
  }
  for (int i = 0; i < n; i++)
  {
    boss.displayEmployee(emp[i]);
    boss.increaseSalary(emp[i]);
    boss.displayEmployee(emp[i]);
  }
  delete[] emp;
  return 0;
}
