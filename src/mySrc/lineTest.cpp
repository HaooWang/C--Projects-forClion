//
// Created by hhaow on 2020/2/24.
//
//4_4.cpp

#include <iostream>
#include "line.h"
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
// 初始化过程：
// 创建的point对象myp1->Cp->形参xp1，参数xp1->Cp->line成员p1
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
int main(int argc, char **argv) {

  Point myp1(1, 2), myp2(4, 5); //建立Point类的对象,并用自定义构造函数初始化类对象myp1,myp2

  Line line(myp1, myp2); //建立Line类的对象Line line,参数列表为两个端点
  // Line::Line(Point xp1, Point xp2) :p1(xp1), p2(xp2) ，初始化列表xp1->p1, xp2->p2
  //形实结合：
// 创建的point对象myp1->Cp->形参xp1，参数xp1->Cp->line成员p1
// 创建的point对象myp2->Cp->形参xp2，参数xp2->Cp->line成员p2
  Line line2(line); //利用复制构造函数建立一个新对象, 执行Line类组合对象的复制构造函数
//
//  cout << "The length of the line is: ";
//
//  cout << line.getLen() << endl;
//
//  cout << "The length of the line2 is: ";
//
//  cout << line2.getLen() << endl;

  return 0;

}