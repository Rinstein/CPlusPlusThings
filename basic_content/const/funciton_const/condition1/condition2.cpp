#include <iostream>
using namespace std;

int main() {
  const int p = 10;
  const void *vp = &p;
  // const char c = 'a';
  void *vp = &c; // error 这属于重定义变量的错误，而不是指针常量的错误
  std::cout<<*(int*)vp<<std::endl;
}
