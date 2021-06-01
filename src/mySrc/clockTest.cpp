
/*
 * class 类的特性：
 * 封装、多态、继承
 */
#include "Clock.h"
#include <iostream>m
/*
 * 类Clock，抽象数据：小时、分钟、秒
 * 抽象成员函数：设置时间、获取时间、显示时间
 */

void Clock:: getTime(int &hour, int &mint, int &sec)// get the current time(h, m, s)
{
  hour = _hour;
  mint = _mint;
  sec = _sec;
  std::cout << "Get time "<< _hour << _mint <<_sec<<std::endl;
}
void Clock:: setTime(int newHour, int newMint = 0, int newSec = 0)// set a new time(h, m, s)
{
  _hour = newHour;
  _mint = newMint;
  _sec = newSec;
}
void Clock:: showTime()  //show the current time(h, m, s)
{
    std::cout << this
              << " showTime: h/m/s "
              <<_hour<<'\t'
              <<_mint<<'\t'
              <<_sec<<'\t' << std::endl;
}
//初始化构造函数
Clock::Clock(int hour, int mint, int sec):
  _hour(hour),_mint(mint),_sec(sec){
  std::cout << " Clock::Clock(int hour, int mint, int sec): is called! " << std::endl;
}
//复制构造函数
Clock::Clock(const Clock& clk){
  _hour = clk._hour;
  _mint = clk._mint;
  _sec = clk._sec;
  std::cout << "Calling the copy constructor" << std::endl;
}

void clk(Clock clock){
  //类对象作为函数形参，函数调用时会调用复制构造函数
  Clock newClk(clock); //复制拷贝，初始化
  newClk.showTime();
  std::cout << "newClk"  <<std::endl;
}
Clock cp(){
  //函数返回值是类对象
  Clock clk(0,0,0); //调用初始化构造函数
  return clk;
}

int main(int argc, char ** argv)
{
  Clock myClock1(12,12,12), myClock2(0,0,0);
  // 声明并初始化两个Clock对象
  myClock1.setTime(11, 50, 12); //调用成员函数
  myClock2.setTime(10);  //调用共有成员函数
  Clock myClock3(myClock1);  // 情况1： 用同类的对象初始化性的类对象，即调用复制调用函数
  clk(myClock1);          //    情况2      ：  类对象作为函数形参，函数调用时会调用复制构造函数
  myClock3 = cp();      // 情况3 ： 函数的返回值是类对象，函数返回时调用复制构造函数
  myClock1.showTime();
  myClock2.showTime();
  myClock3.showTime();
  return 0;
}