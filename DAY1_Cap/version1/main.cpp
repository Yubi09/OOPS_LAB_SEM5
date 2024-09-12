#include "Thinker.cpp"

int main() {
  thinking_cap student;
  thinking_cap fan;
  student.slots("Hello", "Goodbye");
  fan.slots("Go team!!", "Boo!!");
  student.push_green();
  fan.push_green();
  student.push_red();
}