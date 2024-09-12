#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
  string name;
  double distance;
  double fuel;

public:
  void setVehicle()
  {
    cout << "Enter the distance: ";
    cin >> distance;
    cout << "Enter the fuel: ";
    cin >> fuel;
  }
};

class four_wheeler : public Vehicle
{
  int passengers;

public:
  void setFourWheeler()
  {
    cout << "Enter the name of four wheeler: ";
    cin >> name;
    setVehicle();
    cout << "Enter the number of passengers: ";
    cin >> passengers;
  }

  void displayFourWheeler()
  {
    cout << "Name: " << name << endl;
    cout << "Mileage: " << distance / fuel << endl;
    cout << "Number of Passengers: " << passengers << endl;
  }
};

class two_wheeler : public Vehicle
{
  string color;

public:
  void setTwoWheeler()
  {
    cout << "Enter the name of two wheeler: ";
    cin >> name;
    setVehicle();
    cout << "Enter the color: ";
    cin >> color;
  }

  void displayTwoWheeler()
  {
    cout << "Name: " << name << endl;
    cout << "Mileage: " << distance / fuel << endl;
    cout << "Color: " << color << endl;
  }
};

int main()
{
  four_wheeler car;
  two_wheeler bike;
  car.setFourWheeler();
  bike.setTwoWheeler();
  car.displayFourWheeler();
  bike.displayTwoWheeler();

  return 0;
}