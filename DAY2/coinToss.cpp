#include <iostream>
#include <cstdlib>
#include <ctime>

class CoinToss
{
private:
  int outcome;

public:
  CoinToss()
  {
    outcome = 1;
    srand(time(0));
  }
  void toss()
  {
    outcome = rand() % 2;
  }
  std::string getOutcome(int x)
  {
    if (outcome == x)
      return "You win!";
    else return "You lose!";
  }
};

int main()
{
  CoinToss coin;
  int guess;
  std::cout << "Enter your guess (1 for heads, 0 for tails): ";
  std::cin >> guess;
  coin.toss();
  std::cout << coin.getOutcome(guess) << std::endl;

  return 0;
}