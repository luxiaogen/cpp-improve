#include <iostream>
#include <string>
using namespace std;

// 模板的局限性
// 模板并不是万能的，有些特定的数据类型，需要用具体化方式做特殊实现
class Person
{
public:
  Person(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
  string name;
  int age;
};
// 对比两个数据是否相等函数
template<class T>
bool customCompare(T &a, T &b)
{
  if (a == b) return true;
  else return false;
}

void test01()
{
  int a = 10;
  int b = 20;
  int ret = customCompare(a,b);
  if (ret) cout << "a == b" << endl;
  else cout << "a != b" << endl; 
}

// 利用具体化Person的版本实现代码，具体优化先调用
template<> bool customCompare(Person &p1, Person &p2)
{
  if (p1.name == p2.name && p1.age == p2.age) return true;
  return false;
}

void test02()
{
  Person p1("Tom", 10);
  Person p2("Tom", 10);
  bool ret = customCompare(p1, p2);
  if (ret) cout << "p1 == p2" << endl;
  else cout << "p1 != p2" << endl;
}
int main()
{
  // test01();
  test02();
  return 0;
}