#include <iostream>
#include <string>
using namespace std;

// 提前让编译器知道Person1类存在
/*template<class T1, class T2>
class Person1;

// 类外实现
template<class T1, class T2>
void printPerson2(Person1<T1, T2> p)
{
  cout << "name:" << p.name << ",age:" << p.age << endl;
}
template<class T1, class T2>
class Person1
{
  // 全局函数类内实现
  friend void printPerson1(Person1<T1, T2> p)
  {
    cout << "name:" << p.name << ",age:" << p.age << endl;
  }

  // 全局函数类外实现
  // 加空模板参数列表
  // 如果全局函数 是类外实现，需要让编译器提前知道这个函数的存在
  friend void printPerson2<>(Person1<T1, T2> p);
public:
  Person1(T1 name, T2 age)
  {
    this->name = name;
    this->age = age;
  }
private:
  T1 name;
  T2 age;
};*/

/*void test01()
{
  Person1<string,int> p("汤姆", 10);
  printPerson1(p);
}

void test02()
{
  Person1<string,int> p("杰瑞", 10);
  printPerson2(p);
}*/


int main8()
{
  // test02();
  return 0;
}