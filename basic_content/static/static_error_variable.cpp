// variables inside a class

#include <iostream>
using namespace std;

class Apple {
public:
  static int i;

  Apple(){
      // Do nothing
  };
};

// 必须在类外初始化该静态变量
int Apple::i = 10;


int main() {
  Apple obj1;
  Apple obj2;
  // 访问方式不变，但其值只有一个，因为只被初始化了1次
  obj1.i = 2;
  obj2.i = 3;

  // prints value of i
  cout << obj1.i << " " << obj2.i << " "<< Apple::i;
}
