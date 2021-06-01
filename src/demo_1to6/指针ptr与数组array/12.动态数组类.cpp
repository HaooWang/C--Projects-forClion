//
// Created by hhaow on 2020/3/23.
//
#include <iostream>

#include <cassert>

using namespace std;

class Point { //类的声明同例6-16 … };
  /*
   * 将动态数组封装成类

更加简洁，便于管理

可以在访问数组元素前检查下标是否越界
   */
class ArrayOfPoints { //动态数组类
public:
  // 构造函数
  ArrayOfPoints(int size) : size(size) {
    //分配动态内存空间, 初始化时传入size参数，确定new 大小
    points = new Point[size];
  }
  // 析构函数
  ~ArrayOfPoints() {
  // 析构函数，在类对象调用结束后删除new出来的内存空间
  // 释放系统资源
    cout << "Deleting..." << endl;
    delete[] points;
  }
  // 类的成员函数，类型为Point类的引用形式，
  // element为动态数组元素中的某个元素，用于查找并修改index元素
  Point& element(int index) {
    assert(index >= 0 && index < size);
    return points[index];
  }
  // 私有成员变量， Point类型的指针，指向Point类的对象
private:
  Point *points; //指向动态数组首地址，私有
  int size; //数组大小，私有
};

int main() {

  int count;

  cout << "Please enter the count of points: ";

  cin >> count;

  ArrayOfPoints points(count); //创建数组对象

  points.element(0).move(5, 0); //访问数组元素的成员

  points.element(1).move(15, 20); //访问数组元素的成员

  return 0;

}