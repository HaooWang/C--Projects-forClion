//
// Created by hhaow on 2020/3/23.
//
/*
 * 使用深层复制构造函数

    返回时构造临时对象，动态分配将临时对象返回到主调函数，然后删除临时对象。
*/

#include<iostream>

using namespace std;

class IntNum {

//私有成员是指针类型
private:
  int *xptr;

  // 公有成员函数
public:

  IntNum(int x = 0) : xptr(new int(x)){ //自定义构造函数，用于初始化类的对象
    // 类的构造函数的形式为：类名（）：参数初始化列表（）
    cout << "Calling constructor..." << endl;
  }

  IntNum(const IntNum & n) : xptr(new int(*n.xptr)){//复制构造函数

    cout << "Calling copy constructor..." << endl;

  };

  ~IntNum(){ //析构函数

    delete xptr;

    cout << "Destructing..." << endl;

  }

  int getInt() { return *xptr; }


};

//返回值为IntNum类对象
IntNum getNum() {
//函数内局部变量为IntNum类型对象
  IntNum a;

  return a;  // 随着函数调用结束，局部临时变量的生存周期将会结束
  /* 由于返回值是类的成员，即返回值为类的对象，因此会调用复制构造函数
  返回值对象将存储在复制到的临时存储空间中去，不会伴随函数调用声明周期而消亡
*/
}

int main() {

  cout<<getNum().getInt()<<endl;

  return 0;

}