#include <iostream>
using namespace std;

int main() {
  const int *ptr;
  int val = 3;
  ptr = &val; // ok
  // *ptr = 10;这种方式是不可以的，因为常量指令申明是给其加了限制
  cout<< *ptr << endl;
  int *ptr1 = &val;
  *ptr1 = 4;
  val = 99;
  cout << *ptr << endl;
}
