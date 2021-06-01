//
// Created by hhaow on 2020/2/17.
//

#ifndef CPPPROJECT_FORCLION_DEMO04_FUNCTION_H
#define CPPPROJECT_FORCLION_DEMO04_FUNCTION_H

extern int a;//声明并定义一个全局变量a， 它可以存在于多个src文件中，但仅仅允许被定义或初始化一次
int sumOfSquare(int x1, int x2);
int sumOfSquare(int x1, int x2, int x3);
double sumOfSquare(double x1, double x2, double x3); // 函数重载

#endif // CPPPROJECT_FORCLION_DEMO04_FUNCTION_H
