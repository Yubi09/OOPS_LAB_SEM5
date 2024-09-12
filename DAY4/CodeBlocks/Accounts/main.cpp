#include <iostream>
using namespace std;

class Account
{
  int accountNumber;
  int balance;

public:
  void setAccount(int accountNumber, int balance)
  {
    this->accountNumber = accountNumber;
    this->balance = balance;
  }

  void displayAccounts() const
  {
    cout << "Account number: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;
  }

  void transferByValue(Account account1, Account account2, int amount)
  {
    if (account1.balance < amount)
    {
      cout << "Insufficient balance" << endl;
      return;
    }
    int account1Balance = account1.balance - amount;
    int account2Balance = account2.balance + amount;
    account1.balance = account1Balance;
    account2.balance = account2Balance;

    cout << "Account 1 balance: " << account1Balance << endl;
    cout << "Account 2 balance: " << account2Balance << endl;
    cout << "Amount transferred: " << amount << endl;
    cout << "Transfer by value successful with changes in local variables" << endl;
  }

  void transferByReference(Account &account1, Account &account2, int amount)
  {
    if (account1.balance < amount)
    {
      cout << "Insufficient balance" << endl;
      return;
    }
    account1.balance -= amount;
    account2.balance += amount;

    cout << "Account 1 balance: " << account1.balance << endl;
    cout << "Account 2 balance: " << account2.balance << endl;
    cout << "Amount transferred: " << amount << endl;
    cout << "Transfer by reference successful" << endl;
  }

  void transferByAddress(Account *account1, Account *account2, int amount)
  {
    if (account1->balance < amount)
    {
      cout << "Insufficient balance" << endl;
      return;
    }
    account1->balance -= amount;
    account2->balance += amount;

    cout << "Account 1 balance: " << account1->balance << endl;
    cout << "Account 2 balance: " << account2->balance << endl;
    cout << "Amount transferred: " << amount << endl;
    cout << "Transfer by address successful" << endl;
  }

  int getAccountNumber() const
  {
    return accountNumber;
  }
};

int main()
{
  int n;
  cout << "Enter the number of accounts: ";
  cin >> n;

  Account *accounts = new Account[n];

  for (int i = 0; i < n; i++)
  {
    int accountNumber, balance;
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter balance: ";
    cin >> balance;
    accounts[i].setAccount(accountNumber, balance);
  }

  while (true)
  {
    cout << "1. Transfer by value" << endl;
    cout << "2. Transfer by reference" << endl;
    cout << "3. Transfer by address" << endl;
    cout << "4. Display the Accounts" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
      int account1Number, account2Number, amount;
      cout << "Enter account number 1: ";
      cin >> account1Number;
      cout << "Enter account number 2: ";
      cin >> account2Number;
      cout << "Enter amount: ";
      cin >> amount;

      Account *account1;
      Account *account2;
      for (int i = 0; i < n; i++)
      {
        if (accounts[i].getAccountNumber() == account1Number)
        {
          account1 = &accounts[i];
        }
        if (accounts[i].getAccountNumber() == account2Number)
        {
          account2 = &accounts[i];
        }
      }
      if (account1 && account2)
      {
        accounts[0].transferByValue(*account1, *account2, amount);
      }
      else
      {
        cout << "One or both account numbers are invalid." << endl;
      }
      break;

    }
    case 2:
    {
      int account1Number, account2Number, amount;
      cout << "Enter account number 1: ";
      cin >> account1Number;
      cout << "Enter account number 2: ";
      cin >> account2Number;
      cout << "Enter amount: ";
      cin >> amount;

      Account *account1;
      Account *account2;
      for (int i = 0; i < n; i++)
      {
        if (accounts[i].getAccountNumber() == account1Number)
        {
          account1 = &accounts[i];
        }
        if (accounts[i].getAccountNumber() == account2Number)
        {
          account2 = &accounts[i];
        }
      }
      if (account1 && account2)
      {
        accounts[0].transferByReference(*account1, *account2, amount);
      }
      else
      {
        cout << "One or both account numbers are invalid." << endl;
      }
      break;
    }
    case 3:
    {
      int account1Number, account2Number, amount;
      cout << "Enter account number 1: ";
      cin >> account1Number;
      cout << "Enter account number 2: ";
      cin >> account2Number;
      cout << "Enter amount: ";
      cin >> amount;

      Account *account1;
      Account *account2;
      for (int i = 0; i < n; i++)
      {
        if (accounts[i].getAccountNumber() == account1Number)
        {
          account1 = &accounts[i];
        }
        if (accounts[i].getAccountNumber() == account2Number)
        {
          account2 = &accounts[i];
        }
      }
      if (account1 && account2)
      {
        accounts[0].transferByAddress(account1, account2, amount);
      }
      else
      {
        cout << "One or both account numbers are invalid." << endl;
      }
      break;
    }
    case 4:
    {
      for (int i = 0; i < n; i++)
      {
        accounts[i].displayAccounts();
      }
      break;
    }
    case 5:
    {
      cout << "Exiting..." << endl;
      delete[] accounts;
      return 0;
    }
    default:
    {
      cout << "Invalid choice" << endl;
    }
    }
  }

  delete[] accounts;

  return 0;
}
