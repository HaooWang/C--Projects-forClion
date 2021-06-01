//
// Created by hhaow on 2020/2/17.
//

#include "demo04_function.h"

#include <iostream>
using namespace std;
/*
 * 函数重载规则，1. 形参类型不同
 * 2.形参个数不同；
 * 注意：1. 返回值类型不能作为函数重载的标志。
 * 2. 函数的声明应当放在头文件中，定义应该在源文件中完成，这有利于代码重用，提高开发效率
 * 3. 类或者结构体的声明与定义应当都置于头文件中。
 */
int sumOfSquare(int x1, int x2){
  //2-n sum of square computing
  return x1*x1 + x2*x2;
}
int sumOfSquare(int x1, int x2, int x3){
  //3-n sum of square computing
  return x1*x1 + x2*x2 +x3*x3;
}
double sumOfSquare(double x1, double x2, double x3){
  //3-n sum of square computing of real number
  return x1*x1 + x2*x2 + x3*x3;
}

void swap (int &val_a, int &val_b)
//函数声明与定义，形参表，不分配内存空间
//注意，函数的调用有一定开销（断点、上下文压栈、调用、恢复现场）
{
  int tmp;
  tmp = val_a;
  val_a = val_b;
  val_b = tmp;
}
int char2int(const char &chr)
{//简单字符转整形数，例如'2'=2,
  //使用方法char2int(chr = '2')
  return static_cast<int>(chr) - 48;
}
int main(int argc, char **argv)
{
  int a;
  int b = 11;
  int d = 0;
  int & ref = d;
  int*p = &d;
  d = b >> 1;
  double c = 3.14;
  a = 0;
  a +=1;
  cout << a << endl;
  swap(a, b);
  cout << a <<endl;
  cout << sumOfSquare(0.1, 0.2 ,c)<< endl;
  cout << sumOfSquare(a, b )<< endl;
  return 0;
}
