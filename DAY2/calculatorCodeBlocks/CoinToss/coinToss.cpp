#include <iostream>
#include <cstdlib>

class CoinToss
{
private:
  int outcome;

public:
  CoinToss()
  {
    outcome = 0;
  }
  void toss()
  {
    outcome = rand() % 2;
  }
  std::string getOutcome()
  {
    if (outcome == 1)
      return "Heads";
    else
      return "Tails";
  }
};

int main()
{
  CoinToss coin;
  coin.toss();
  std::cout << "The outcome of the coin toss is: " << coin.getOutcome() << std::endl;
  return 0;
}
