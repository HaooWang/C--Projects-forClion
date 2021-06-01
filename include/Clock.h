//
// Created by hhaow on 2020/2/22.
//

#ifndef CPPPROJECT_FORCLION_CLOCK_H
#define CPPPROJECT_FORCLION_CLOCK_H

/*
 * class 类的特性：
 * 封装、多态、继承
 */
#include "Clock.h"
/*
 * 类Clock，抽象数据：小时、分钟、秒
 * 抽象成员函数：设置时间、获取时间、显示时间
 */


class Clock{
public:
  Clock(int hour, int mint, int sec);  //自定义构造函数
  Clock(const Clock& clk);  //自定义复制构造函数，编译器不使用默认复制构造函数

  void getTime(int &hour, int &mint, int &sec);// get the current time(h, m, s)
  void setTime(int newHour , int newMint , int newSec ); // set a new time(h, m, s)
  void showTime();    //show the current time(h, m, s)

private:
  //private variables
  int _hour , _mint , _sec ;
};

#endif // CPPPROJECT_FORCLION_CLOCK_H
