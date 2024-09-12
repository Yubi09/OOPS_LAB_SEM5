#include "calculator.h"
#include <iostream>

int main()
{
  Calculator calc;
  int n1, n2;
  while (1)
  {
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Enter your choice: ";
    int choice;
    std::cin >> choice;
    switch (choice)
    {
    case 1:
      std::cout << "Enter two numbers: ";
      std::cin >> n1 >> n2;
      std::cout << "Result: " << calc.add(n1, n2) << std::endl;
      break;
    case 2:
      std::cout << "Enter two numbers: ";
      std::cin >> n1 >> n2;
      std::cout << "Result: " << calc.sub(n1, n2) << std::endl;
      break;
    case 3:
      std::cout << "Enter two numbers: ";
      std::cin >> n1 >> n2;
      std::cout << "Result: " << calc.mul(n1, n2) << std::endl;
      break;
    case 4:
      std::cout << "Enter two numbers: ";
      std::cin >> n1 >> n2;
      if (n2 != 0)
        std::cout << "Result: " << calc.div(n1, n2) << std::endl;
      else
        std::cout << "Division by zero is not allowed." << std::endl;

      break;
    case 5:
      std::cout << "Exiting..." << std::endl;
      exit(0);
      break;

    default:
      break;
    }
  }
}