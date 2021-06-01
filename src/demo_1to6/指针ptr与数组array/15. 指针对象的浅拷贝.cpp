//
// Created by hhaow on 2020/3/23.
//
/*
 *例6-21 对象的浅层复制
*/
#include <iostream>

#include <cassert>

using namespace std;

class Point {

//类的声明同例6-16

//……

};

class ArrayOfPoints {

//类的声明同例6-18

//……

};

int main() {

  int count;

  cout << "Please enter the count of points: ";

  cin >> count;

  ArrayOfPoints pointsArray1(count); //创建对象数组

  pointsArray1.element(0).move(5,10);

  pointsArray1.element(1).move(15,20);

  ArrayOfPoints pointsArray2(pointsArray1); //创建副本

  cout << "Copy of pointsArray1:" << endl;

  cout << "Point_0 of array2: " << pointsArray2.element(0).getX() << ", "

       << pointsArray2.element(0).getY() << endl;

  cout << "Point_1 of array2: " << pointsArray2.element(1).getX() << ", "

       << pointsArray2.element(1).getY() << endl;

  pointsArray1.element(0).move(25, 30);

  pointsArray1.element(1).move(35, 40);

  cout<<"After the moving of pointsArray1:"<<endl;

  cout << "Point_0 of array2: " << pointsArray2.element(0).getX() << ", "

       << pointsArray2.element(0).getY() << endl;

  cout << "Point_1 of array2: " << pointsArray2.element(1).getX() << ", "

       << pointsArray2.element(1).getY() << endl;

  return 0;

}

运行结果如下：

Please enter the number of points:2

Default Constructor called.

Default Constructor called.

Copy of pointsArray1:

Point_0 of array2: 5, 10

Point_1 of array2: 15, 20

After the moving of pointsArray1:

Point_0 of array2: 25, 30

Point_1 of array2: 35, 40

Deleting...

    Destructor called.

Destructor called.

Deleting...