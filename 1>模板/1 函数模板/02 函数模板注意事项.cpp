#include <iostream>
using namespace std;

/*
  函数模板注意事项
    1、自动类型推导，必须推导出一致的数据类型T才可以使用
    2、模板必须要确定T的数据类型，才可以使用
*/
template <class T> // typename可以替换称class
void my_swap(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}
/*void test01()
{
  int a = 10;
  int b = 20;
  char c = 'a';
  // my_swap(a,b); 正确！
  // my_swap(a,c); 错误！推导不出T的类型
}*/

template <class T>
void func()
{
  cout << "func() 调用" << endl;
}
/*void test02()
{
  // func(); 错误
  func<int>(); // 正确
}*/

int main2()
{
  // test01();
  return EXIT_SUCCESS;
}