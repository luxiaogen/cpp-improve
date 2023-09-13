#pragma once
#include <iostream>
#include <string>
using namespace std;

template<class T>
class MyArray
{
public:
  // 有参构造 参数 容量
  MyArray(int capacity)
  {
    // cout << "MyArray 构造函数调用" << endl;
    this->capacity = capacity;
    this->size = 0;
    this->pAddress = new T[this->capacity];
  }
  // 析构函数
  ~MyArray()
  {
    // cout << "MyArray 析构函数调用" << endl;
    if (this->pAddress != NULL)
    {
      delete[] this->pAddress;
      this->pAddress = NULL;
    }
  }
  // 拷贝构造
  MyArray(const MyArray &arr)
  {
    // cout << "MyArray 拷贝构造调用" << endl;
    this->capacity = arr.capacity;
    this->size = arr.size;
    // this->pAddress = arr.pAddress;

    // 深拷贝
    this->pAddress = new T[arr.capacity];

    // 将arr中的数据都拷贝过来
    for (int i = 0; i < this->size; i++)
    {
      this->pAddress[i] = arr.pAddress[i];
    }
  }

  // operator= 防止浅拷贝问题
  // p1.operator=(p2) --- p1 = p2
  MyArray& operator=(const MyArray &arr)
  {
    // cout << "MyArray 的operator=调用" << endl;
    // 先判断原来堆区是否有数据，如果有先释放
    if (this->pAddress != NULL)
    {
      delete[] this->pAddress;
      this->pAddress = NULL;
      this->capacity = 0;
      this->size = 0;
    }

    // 深拷贝
    this->capacity = arr.capacity;
    this->size = arr.size;
    for (int i = 0; i < this->size; i++)
    {
      this->pAddress[i] = arr.pAddress[i];
    }
    return *this;
  }

  /**
   * 尾插法
   * @param val 插入的数值
   */
  void pushBack(const T &val)
  {
    // 判断容量是否等于大小
    if (this->capacity == this->size)
      return;
    this->pAddress[this->size] = val;
    this->size++;
  }

  /**
   * 尾删法
   */
  void popBack()
  {
    // 让用户访问不到最后一个元素，即为尾删，逻辑删除
    if (this->size == 0) return;
    this->size--;
  }

  // 通过下标的方式访问数组的元素  并且有左值的写法
  T& operator[](int index)
  {
    return this->pAddress[index];
  }

  // 返回属猪容量
  int getCapacity()
  {
    return this->capacity;
  }

  // 返回数组大小
  int getSize()
  {
    return this->size;
  }
private:
  T *pAddress;
  int size;
  int capacity;
};
