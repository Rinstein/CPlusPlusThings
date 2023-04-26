// the use of static Static
// variables in a Function
#include <iostream>
#include <string>
using namespace std;

void demo() {
  // static variable
  // 可以在函数的多次调用中重复使用该值，因为静态变量只被初始化一次
  static int count = 0;
  cout << count << " ";

  // value is updated and
  // will be carried to next
  // function calls
  count++;
}

int main() {
  for (int i = 0; i < 5; i++)
    demo();
  return 0;
}
