/**
 * @file func_pointer.cpp
 * @brief 函数指针的使用！
 * @author 光城
 * @version v1
 * @date 2019-07-20
 */

#include <iostream>
using namespace std;

/**
 * @brief
 * 定义了一个变量pFun，这个变量是个指针，指向返回值为空和参数为int的函数的指针！
 */
void (*pFun1)(int);
void (*pFun2)();

/**
 * @brief 代表一种新类型，不是变量！所以与上述的pFun不一样！
 */
typedef void (*func_ptr)(void);
typedef void (*func_int_ptr)(int);

typedef void (func)(void);
typedef void (func_int)(int);

static void myfunc(void) { cout << "myfunc" << endl; }

static void glFun(int a) { cout << a << endl; }
int main() {
  
  /*定义的函数指针变量可以指向返回值和参数一样的函数*/ 
  pFun1 = glFun;
  pFun2 = myfunc;
  (*pFun1)(5);
  (*pFun2)();

  /* typedef 定义的是一种函数指针类型，还需要重新声明变量，但两种定义的形式类似 */
  func_ptr func_a = myfunc; /*赋值*/
  func_int_ptr func_b = glFun; 
  func_a();
  func_b(10);

  myfunc();
  glFun(10);
  
  /* 如果使用不一致的类型赋值，则会报错 */ 
  // a = glFun;
  // b = myfunc;
  
  cout<< "end"<<endl;
  return 0;
}
