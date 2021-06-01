//
// Created by hhaow on 2020/2/24.
//

#include "line.h"

#include <iostream>

#include <cmath>

using namespace std;


Point::Point(int xx , int yy ) {
  // 自定义point类构造函数
  x = xx;
  y = yy;
  cout << "Constructor of Point Class Objects" << endl;
}

Point::Point(Point &p) { //复制构造函数的实现

  x = p.x;

  y = p.y;

  cout << "Calling the copy constructor of Point" << endl;

}
//Point类 公有成员函数
int Point::getX() {
  return x;
}
int Point::getY(){
  return y;
}


//组合类Line的构造函数
Line::Line(Point xp1, Point xp2) :p1(xp1), p2(xp2) {
//组合类Line对象包含两个形参，point p1 and point p2
  cout << "Calling constructor of Line" << endl;

  double x = static_cast<double>(p1.getX() - p2.getX());

  double y = static_cast<double>(p1.getY() - p2.getY());

  len = sqrt(x * x + y * y);

}

Line::Line (Line &l): p1(l.p1), p2(l.p2) {
  //组合类line的复制构造函数

  cout << "Calling the copy constructor of Line" << endl;

  len = l.len;

}