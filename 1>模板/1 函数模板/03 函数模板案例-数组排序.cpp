#include <iostream>
using namespace std;

/*
  实现通用 对数组进行排序的函数
  规则 从大到小
  算法 选择
  测试 char数组、int数组
*/

template <class T>
void mySwap(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}
// 交换排序
template <class T>
void mySort(T arr[], int len)
{
  int max_i = 0;
  for (int i = 0; i < len; i++)
  {
    max_i = i;
    for (int j = i + 1; j < len; j++)
    {
      if (arr[max_i] < arr[j])
        max_i = j;
    }
    if (max_i != i)
      mySwap(arr[max_i], arr[i]);
  }
}

// 打印数组模板
template<class T>
void printArr(T arr[], int len)
{
  for (int i = 0; i < len; i++)
    cout << arr[i] << " ";
  cout << endl;
}
/*void test01()
{
  // 测试char数组
  char charArr[] = "badcfe";
  int num = sizeof(charArr) / sizeof(char);
  mySort(charArr, num);
  printArr(charArr, num);
  int intArr[] = {1,2,3,4,5,6};
  num = sizeof(intArr) / sizeof(int);
  mySort(intArr, num);
  printArr(intArr, num);
}*/
int main3()
{
  // test01();
  return EXIT_SUCCESS;
}