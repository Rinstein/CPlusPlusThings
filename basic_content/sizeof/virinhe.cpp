/**
 * @file virnhe.cpp
 * @brief 虚继承
 * @author 光城
 * @version v1
 * @date 2019-07-21
 */

#include <iostream>

using namespace std;

class A {
  virtual void fun() {}
};

class B {
  virtual void fun2() {}
};
class C : virtual public A, virtual public B {
public:
  virtual void fun3() {}
};
class D : public A, public B {
public:
  virtual void fun3() {}
};

int main() {

  /**
   * @brief 8 8 32 16  派生类虚继承多个虚函数，会继承所有虚函数的vptr
   * 虚继承是为了解决多重继承中的基类重定义的问题，由于其会形成一个虚基表指针，所以会占用额外的空间，而常规继承则不会
   */
  cout << sizeof(A) << " " << sizeof(B) << " " << sizeof(C) << " " << sizeof(D);

  return 0;
}
