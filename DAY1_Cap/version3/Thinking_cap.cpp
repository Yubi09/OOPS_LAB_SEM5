#include<string.h>
#include<iostream>
#include<stdlib.h>

class thinking_cap
{
  private:
    char green_string[50];
    char red_string[50];
  public:
    void slots(char new_green[], char new_red[]){
      if(strlen(new_green) > 50 || strlen(new_red) > 50){
        std::cout << "String too long" << std::endl;
        exit(1);
      }
      strcpy(green_string, new_green);
      strcpy(red_string, new_red);
    }
    void push_green()const{
      std::cout << green_string << std::endl;
    }
    void push_red()const{
      std::cout << red_string << std::endl;
    }
};

int main() {
  thinking_cap student;
  thinking_cap fan;
  student.slots("Hello", "Goodbye");
  fan.slots("Go team!!", "Boo!!");
  student.push_green();
  fan.push_green();
  student.push_red();
}