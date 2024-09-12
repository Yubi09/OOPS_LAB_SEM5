#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class GST;

class Product
{
  string product_name;
  float product_price;

public:
  void setProduct()
  {
    cout << "Enter Product Name: ";
    cin >> product_name;
    cout << "Enter Product Price: ";
    cin >> product_price;
  }

  friend void finalPrice(Product p, GST g);
};

class GST
{
  float gst_rate;

public:
  void setGST()
  {
    cout << "Enter GST Rate: ";
    cin >> gst_rate;
  }

  friend void finalPrice(Product p, GST g);
};

void finalPrice(Product p, GST g)
{
  if (p.product_price < 0)
  {
    throw "Exception: Price is Negative";
  }
  if (g.gst_rate < 0)
  {
    throw "Exception: GST Rate is Negative";
  }
  float total_price = p.product_price + (p.product_price * g.gst_rate / 100);
  cout << "Product Name: " << p.product_name << endl;
  cout << "Total Price: " << total_price << endl;
}

int main()
{
  Product p;
  GST g;

  try
  {
    p.setProduct();
    g.setGST();
    finalPrice(p, g);
  }
  catch (const char *msg)
  {
    cout << msg << endl;
  }
  catch (...)
  {
    cout << "Exception occurred!!" << endl;
  }
  return 0;
}