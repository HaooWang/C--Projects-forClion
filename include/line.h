//
// Created by hhaow on 2020/2/24.
//

#ifndef CPPPROJECT_FORCLION_LINE_H
#define CPPPROJECT_FORCLION_LINE_H

class Point { //Point类声明

public:

  Point(int xx , int yy ) ; //自定义带形式参数构造函数

  Point(Point &p);     // 复制构造函数  point类

  int getX();

  int getY();

private:

  int x, y;

};


//类的组合

class Line { //Line类的定义

public: //外部接口

  Line(Point xp1, Point xp2);

  Line(Line &l);

  inline double getLen() { return len; }

private: //私有数据成员

  Point p1, p2; //line类的私有成员变量为：Point类的对象p1,p2

  double len;

};

#endif // CPPPROJECT_FORCLION_LINE_H
