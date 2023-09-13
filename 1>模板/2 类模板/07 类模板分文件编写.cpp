#include <iostream>
using namespace std;

// 类模板分文件编写问题以及解决
// 第一种解决办法，直接包含 源文件
//#include "1>模板/2 类模板/Person.cpp"
// 第二种解决方式，将 .h 和 .cpp 中的内容写到一起，将后缀名改为 .hpp 文件
# include "案例/Person.hpp"

/*void test01()
{
   Person<string,int> p("张三", 18);
   p.showPerson();
}*/

int main7()
{
  // test01();
  return EXIT_SUCCESS;
}