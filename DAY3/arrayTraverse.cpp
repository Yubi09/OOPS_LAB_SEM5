#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the size of the array: ";
  int size;
  cin >> size;
  int **ptrArr = new int *[size];
  int *arr = new int[size];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  int *ptr = arr;
  cout << "Increment pointer: ";
  for (int i = 0; i < size; i++)
  {
    cout << *ptr << " ";
    ptr++;
  }
  cout << endl;
  cout << "Array name as pointer: ";
  for (int i = 0; i < size; i++)
  {
    cout << *(arr + i) << " ";
  }
  cout << endl;
  cout << "Array of pointers: ";
  for (int i = 0; i < size; i++)
  {
    ptrArr[i] = &arr[i];
  }
  for (int i = 0; i < size; i++)
  {
    cout << *ptrArr[i] << " ";
  }
  delete[] arr;
  delete[] ptrArr;
  return 0;
}