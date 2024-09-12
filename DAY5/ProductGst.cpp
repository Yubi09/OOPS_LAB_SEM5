#include <iostream>
#include <string>
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
  float total_price = p.product_price + (p.product_price * g.gst_rate / 100);
  cout << "Product Name: " << p.product_name << endl;
  cout << "Total Price: " << total_price << endl;
}

int main()
{
  Product p;
  GST g;
  p.setProduct();
  g.setGST();
  finalPrice(p, g);
  return 0;
}