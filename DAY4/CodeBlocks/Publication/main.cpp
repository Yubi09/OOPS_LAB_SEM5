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

class Book
{
  Publication pub;
  Sales sal;
  int totalPages;

public:
  Book() : pub(), sal(), totalPages(0) {}

  Book(string title, int price, int printedCopy, int soldCopy, int pages) : totalPages(pages)
  {
    pub.setTitle(title);
    pub.setPrice(price);
    sal.setPrintedCopy(printedCopy);
    sal.setSoldCopy(soldCopy);
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

  cout << "Enter the title of the book:";
  cin >> title;
  cout << "Enter the price of the book:";
  cin >> price;
  cout << "Enter the number of copies printed:";
  cin >> printedCopy;
  cout << "Enter the number of copies sold:";
  cin >> soldCopy;
  cout << "Enter the number of pages in the book:";
  cin >> pages;

  Book b2(title, price, printedCopy, soldCopy, pages);
  b2.display();
}
