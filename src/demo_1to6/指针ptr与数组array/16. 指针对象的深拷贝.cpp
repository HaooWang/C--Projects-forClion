//
// Created by hhaow on 2020/3/23.
//
 // 例6-22 对象的深层复制

#include <iostream>

#include <cassert>

using namespace std;

class Point { //类的声明同例6-16

};

class ArrayOfPoints {

public:
  //类中的复制构造函数声明

  ArrayOfPoints(const ArrayOfPoints& pointsArray);

//其他成员同例6-18

};

// 类外进行复制构造函数定义和实现
// 函数形参为常类型的引用形式，浅拷贝形式
ArrayOfPoints::ArrayOfPoints(const ArrayOfPoints& v) {

  size = v.size;

  // 重新分配等大小的内存空间
  points = new Point[size]; //对象数组中的每一个元素均为类的对象实例，因此创建时都会调用构造函数
  // 循环复制每一个元素并赋值
  for (int i = 0; i < size; i++)

    points[i] = v.points[i];

}

int main() {

//同例6-20

}

程序的运行结果如下：

Please enter the number of points:2

Default Constructor called.

Default Constructor called.

Default Constructor called.

Default Constructor called.

Copy of pointsArray1:

Point_0 of array2: 5, 10

Point_1 of array2: 15, 20

After the moving of pointsArray1:

Point_0 of array2: 5, 10

Point_1 of array2: 15, 20

Deleting...

    Destructor called.

Destructor called.

Deleting...

    Destructor called.

Destructor called.