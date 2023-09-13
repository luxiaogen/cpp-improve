#include <iostream>
using namespace std;

// 类模板成员函数类外实现
/*template<class T1, class T2>
class Person
{
public:
  Person(T1 name, T2 age);
  void showPerson();
  T1 name;
  T2 age;
};

// 构造函数类外实现
template<class T1, class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
  this->name = name;
  this->age = age;
}

// 成员函数类外实现
template<class T1, class T2>
void Person<T1,T2>::showPerson()
{
  cout << "name :" << this->name << ",age:" << this->age << endl;
}*/

/*void test01()
{
  Person<string,int> p("张三", 10);
  p.showPerson();
}*/


int main6()
{
  // test01();
  return EXIT_SUCCESS;
}