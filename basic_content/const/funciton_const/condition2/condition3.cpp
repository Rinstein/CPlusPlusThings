#include <iostream>
using namespace std;
int main() {
  const int num = 10;
  const int *const ptr = &num; // 现在就可以支持了，且用的是常量常指针
  cout << *ptr << endl;
}
