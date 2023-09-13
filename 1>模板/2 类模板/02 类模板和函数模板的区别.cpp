#include <iostream>
#include <string>
using namespace std;


/*template <class NameType, class AgeType = int>
class Person
{
public:
  Person(NameType name, AgeType age)
  {
    this->name = name;
    this->age = age;
  }
  void showPerson()
  {
    cout << "name = " << this->name << ",age = " << this->age << endl;
  }
  NameType name;
  AgeType age;
};*/

// 1、类模板没有自动类型推导使用方式
/*void test01()
{
  // Person p("孙悟空", 999); 错误，无法用自动类型推导
  Person<string,int> p("孙悟空", 999); // 正确，只能用显示指定类型
  p.showPerson();
}

// 2、类模板在模板参数列表中可以有默认参数
void test02()
{
  Person<string> p("猪八戒", 1000);
  p.showPerson();
}*/
int main2()
{
//  test01();
//  test02();
  return EXIT_SUCCESS;
}