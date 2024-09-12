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
  Publication(string t, int p) : title(t), price(p) {}

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
  Sales(int s, int p) : soldCopy(s), printedCopy(p) {}
  int getSoldCopy()
  {
    return soldCopy;
  }
  int getPrintedCopy()
  {
    return printedCopy;
  }
};

class Book
{
  Publication pub;
  Sales sal;
  int totalPages;

public:
  Book() : pub(), sal(), totalPages(0) {}

  Book(string title, int price, int printedCopy, int soldCopy, int pages) : totalPages(pages)
  {
    pub = Publication(title, price);
    sal = Sales(soldCopy, printedCopy);
  }

  void display()
  {
    cout << "Title: " << pub.getTitle() << endl;
    cout << "Price: " << pub.getPrice() << endl;
    cout << "Number of copies printed: " << sal.getPrintedCopy() << endl;
    cout << "Number of copies sold: " << sal.getSoldCopy() << endl;
    cout << "Number of pages: " << totalPages << endl;
  }
};

int main()
{
  Book b1;
  b1.display();
  cout << endl;
  string title;
  int price, soldCopy, pages, printedCopy;

  cout << "Enter the title of the book: ";
  cin >> title;
  cout << "Enter the price of the book: ";
  cin >> price;
  cout << "Enter the number of copies printed: ";
  cin >> printedCopy;
  cout << "Enter the number of copies sold: ";
  cin >> soldCopy;
  if (soldCopy > printedCopy)
  {
    cout << "Invalid copies!!!" << endl;
    return 0;
  }
  cout << "Enter the number of pages in the book: ";
  cin >> pages;

  Book b2(title, price, printedCopy, soldCopy, pages);
  b2.display();
}