#include <iostream>
#include <string>

using namespace std;

class Publication
{
private:
  string title;
  int price;

public:
  Publication() : title("UNTITLED"), price(0) {}

  void setTitle(string name)
  {
    title = name;
  }

  void setPrice(int n)
  {
    price = n;
  }

  string getTitle()
  {

    return title;
  }
  int getPrice()
  {
    return price;
  }
};

class Sales
{
private:
  int soldCopy;
  int printedCopy;

public:
  Sales() : soldCopy(0), printedCopy(0) {}
  void setSoldCopy(int n)
  {
    soldCopy = n;
  }
  void setPrintedCopy(int n)
  {
    printedCopy = n;
  }
  int getSoldCopy()
  {
    return soldCopy;
  }
  int getPrintedCopy()
  {
    return printedCopy;
  }
};

class Book : public Publication, public Sales
{
private:
  int pages;

public:
  Book() : Publication(), Sales(), pages(0) {}
  Book(string title, int price, int soldCopy, int printedCopy, int pages) : Publication(), Sales(), pages(pages)
  {
    setTitle(title);
    setPrice(price);
    setSoldCopy(soldCopy);
    setPrintedCopy(printedCopy);
  }

  void displayBook()
  {
    cout << "Title: " << getTitle() << endl;
    cout << "Price: " << getPrice() << endl;
    cout << "Sold copies: " << getSoldCopy() << endl;
    cout << "Printed copies: " << getPrintedCopy() << endl;
    cout << "Pages: " << pages << endl;
  }
};

int main()
{
  Book book1;
  book1.displayBook();

  cout << endl;

  string title;
  int price, soldCopy, printedCopy, pages;

  cout << "Enter the title of the book: ";
  cin >> title;
  cout << "Enter the price of the book: ";
  cin >> price;
  cout << "Enter the number of sold copies: ";
  cin >> soldCopy;
  cout << "Enter the number of printed copies: ";
  cin >> printedCopy;
  cout << "Enter the number of pages: ";
  cin >> pages;

  Book book2(title, price, soldCopy, printedCopy, pages);
  book2.displayBook();
  return 0;
}
