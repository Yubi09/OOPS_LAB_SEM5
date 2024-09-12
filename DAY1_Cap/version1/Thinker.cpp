#include "thinker.h"
#include <string.h>
#include <iostream>
using namespace std;

void thinking_cap::slots(char new_green[], char new_red[]){
  if(strlen(new_green) > 50){
    cout << "Error hai bhai!!" << endl;
  }
  strcpy(green_string, new_green);
  if(strlen(new_red) > 50){
    cout << "Error hai bhai!!" << endl;
  }
  strcpy(red_string, new_red);
}

void thinking_cap::push_green() const{
  cout << green_string << endl;
}

void thinking_cap::push_red() const{
  cout << red_string << endl;
}