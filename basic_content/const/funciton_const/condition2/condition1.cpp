#include <iostream>
using namespace std;
int main() {
  int num = 0;
  int *const ptr = &num; // const指针必须初始化！且const指针的值不能修改
  *ptr = 11; // 但是常指针可以修改其指向内容的值
  int num1 = 9;
  // ptr = &num1; error, 常指针不能够再指向其他元素
  // int *t = &num;
  // *t = 1;
  cout << *ptr << endl;
}
