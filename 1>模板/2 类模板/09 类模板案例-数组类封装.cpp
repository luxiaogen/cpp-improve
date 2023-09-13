#include "MyArray.hpp"

// 测试自定义数据类型
class Person3
{
public:
  Person3() {}
  Person3(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
  string name;
  int age;
};

void printPersonArr(MyArray<Person3> &arr)
{
  for (int i = 0; i < arr.getSize(); i++)
  {
    cout << "姓名:" << arr[i].name << ",年龄:" << arr[i].age << endl;

  }
}

void test02()
{
  MyArray<Person3> arr(10);
  Person3 p1("小王", 20);
  Person3 p2("小张", 21);
  Person3 p3("小跟", 22);
  Person3 p4("小皮", 23);
  arr.pushBack(p1);
  arr.pushBack(p2);
  arr.pushBack(p3);
  arr.pushBack(p4);
  printPersonArr(arr);
  cout << arr.getCapacity() << endl;
  cout << arr.getSize() << endl;
}


void printIntArray(MyArray<int> &arr)
{
  for (int i = 0; i < arr.getSize(); i++)
  {
    cout << arr[i] << endl;
  }
}

void test01()
{
  MyArray<int> arr(5);
  for (int i = 0; i < 5; i++)
    arr.pushBack(i);
  printIntArray(arr);
  cout << "arr.capacity = " << arr.getCapacity() << endl;
  cout << "arr.size = " << arr.getSize() << endl;
  MyArray<int> arr2(arr);
  printIntArray(arr2);
  // 尾删
  arr2.popBack();
  printIntArray(arr2);
  /*MyArray<int> arr2(arr1);
  MyArray<int> arr3(100);
  arr3 = arr1;*/

}

int main()
{
  // test01();
  test02();
  return EXIT_SUCCESS;
}