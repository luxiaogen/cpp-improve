#include <iostream>
#include <string>

using namespace std;

// 类模板与继承
template <class T>
class Base
{
  T a;
};

// class Son1 : public Base 错误的，必须要知道父类中T类型才能继承给子类
class Son1 : public Base<int>
{

};

template<class T1, class T2>
class Son2 : public Base<T2>
{
public:
  Son2()
  {
    cout << "T1的类型:" << typeid(T1).name() << endl;
    cout << "T2的类型:" << typeid(T2).name() << endl;
  }
  T1 obj;
};
/*void test01()
{
  Son1 s1;
}*/

/*void test02()
{
  Son2<int, char> s2;
}*/

int main5()
{
  // test01();
  // test02();
  return EXIT_SUCCESS;
}